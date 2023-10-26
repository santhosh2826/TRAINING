import { Component, OnInit } from '@angular/core';
import { MyserviceService } from '../myservice.service';

@Component({
  selector: 'app-angularoperation',
  templateUrl: './angularoperation.component.html',
  styleUrls: ['./angularoperation.component.scss']
})
export class AngularoperationComponent implements OnInit {
  movies:any
  getmovie:any
  id:any
  moviename:any
  heroname:any

  

ngOnInit(): void {
   this.getall()


}

constructor( private myserve:MyserviceService){}
getall()
{
  this.myserve.getAllUsers().subscribe(data=>{this.movies=data
    console.log(this.movies);
  
  })
}
get(id:any){

this.myserve.getuserbyid(id).subscribe(data=>{
  this.getmovie=data
  this.id=this.getmovie[0].id
  this.moviename=this.getmovie[0].moviename
  this.heroname=this.getmovie[0].heroname
})

}

getuser(){

  let mydata:any={}
  mydata ['moviename']=this.moviename
  mydata ['heroname']=this.heroname
  this.myserve.createuser(mydata).subscribe((data:any)=>{
    console.log(data)
    this.getall()
  })
}
updateuser(id1:any)
{
  console.log(id1)
let updatedata:any={}
updatedata['moviename']=this.moviename
updatedata['heroname']=this.heroname
// console.log(updatedata)
this.myserve.updateuser(id1 ,updatedata).subscribe(data=>{
console.log(data)
this.getall()
})
this.moviename='';
this.heroname='';
}
del( id:any)
{
this.myserve.deluser(id).subscribe(data=>{
  console.log(data);
  this.getall()
  
})
}
}
