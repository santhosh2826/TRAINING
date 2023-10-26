import { Injectable } from '@angular/core';
import{HttpClient} from '@angular/common/http';



@Injectable({
  providedIn: 'root'
})
export class MyserviceService {
  url:String="http://localhost:3000";
  
constructor(private httpclient:HttpClient){}
getAllUsers()
{
  return this.httpclient.get(this.url+'/getAllUsers')
}

getuserbyid(id:any)
{
  return this.httpclient.get(this.url+'/getUserById/'+id)
}
createuser(data :any){

  return this.httpclient.post(this.url+'/createUser',data)

}
updateuser(id1:any ,updatedata:any){
  return this.httpclient.put(this.url+'/updateUserById/'+id1,updatedata)

}
deluser(id:any)
{
  return this.httpclient.put(this.url+'/deleteUserById',{id:id})

}
}
