
const express = require("express");
const app = express();
// instead of using body parser we can use this
const cors=require("cors")
app.use(cors())
app.use(express.json())
var mysql = require("mysql2");
var db = mysql.createConnection({
host: "localhost",
user: "santhosh",
password: "Santhosh@123",
database: "movies",
});
db.connect(function (err) {
if (err) {
console.error("error connecting: " + err.stack);
return;
}
console.log("connected as id " + db.threadId);
});
app.post("/createUser", (req, res) => {
db.query(
"insert into mymovie(moviename,heroname,isActive) values(?,?,?)",
[ req.body.moviename,req.body.heroname,1],
function (error, results, fields) {
if (error) console.log(error);
console.log("Created successfully");
res.json(results);
}
);
});
// // get all users
app.get("/getAllUsers", (req, res) => {
db.query(
"SELECT id ,moviename,heroname from mymovie where isActive=1 ",
function (error, results, fields) {
if (error) console.log(error);
console.log("All Users:", results);
res.json(results)
}
);
});
// get user by id++++
app.get("/getUserById/:id", (req, res) => {
db.query(
"SELECT id ,moviename,heroname from mymovie where id=?",
[req.params.id],
function (error, results, fields) {
if (error) console.log(error);
// console.log("one user:", results);
res.json(results);
}
);
});
app.put("/updateUserById/:id", (req, res) => {
db.query(
"update mymovie set moviename=?,heroname=? where id=?",
[req.body.moviename,req.body.heroname, req.params.id],
function (error, results, fields) {
if (error) console.log(error);
console.log(results)
console.log("updated successfully");
res.json(results);
}
);
});
app.put("/deleteUserById", (req, res) => {
db.query(
"update mymovie set isActive=0 where id=?",
[req.body.id],
function (error, results, fields) {
if (error) console.log(error);
console.log("deleted  successfully");
res.json(results);
}
);
});
app.listen(3000, () => {
console.log("listening on port 3000");
});