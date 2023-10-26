import { Component ,EventEmitter,Input, Output} from '@angular/core';

@Component({
  selector: 'app-crud',
  templateUrl: './crud.component.html',
  styleUrls: ['./crud.component.scss']
})

export class CrudComponent {
  @Input()newvar=''
  // @Output() pfun =new EventEmitter()

  setcol='green'
  setcols='green'
  setscol='green'
  show1=false
  show2=false

  title:string="santhosh";
  ptitle:string="pravin";
  mycolor="blue"
  changecolor(color:string){
    this.mycolor=color;

  }
  twocolor="red";
  show=false;
  shows=false;
emp:{ id:number,fname:string,age:number}[]=[{
  id:1,
  fname:"santhosh",
  age:28
},
{
  id:2,
  fname:"pravin",
  age:50
},
{
  id:3,
  fname:"suriya",
  age:85
}]
// add(n:any){
//   this.emp.push(n)
// }
create(){
  if(this.show== false){
    this.show=true;
    this.setcol='red'
  }
  else{
    this.show=false;
    this.setcol='black'
  }
  if(this.setcol=='black')
  {
    this.setcol=' green'
  }
  // this.show=!this.show
}
submit( n0:any,n1:string,n2:any){
  this.emp.push({ id:n0,fname:n1,age:n2})
  if(this.show1==false)
  {
    this.show1=true;
    this.show=false;
  }
  
  
}
ok()
{
  if(this.show1==true){
    this.show1=false;
    this.setcol='green'
  }
}
  
ok1(){
  if(this.show2==true)
  {
    this.show2=false;
    this.setcols='green'
  }
}
delete(){
  if(this.shows== false){
    this.shows=true
    this.setcols='red'
  }
  else{
    this.shows=false
    this.setcols='black';
  }
  if(this.setcols=='black')
  {
    this.setcols=' green'
  }
}
del(n4:any){
this.emp=this.emp.filter(e=>e.id!=n4)
if(this.shows==true){
  this.show2=true
  this.shows=false;
}
}
val(){
  console.log(this.newvar)
}
// val1(){
// this.pfun.emit(this.setcol)
// }
}
