var objet=new Array; 
     objet["class"]=new Array; 
     objet["exception"]=new Array; 
     objet["collection"]=new Array; 
     objet["notification"]=new Array; 
     objet["interface"]=new Array; 
     objet["struct"]=new Array; 
     objet["enum"]=new Array; 
     objet["define"]=new Array; 
     objet["typedef"]=new Array; 
     objet["function"]=new Array; 
 	var DSCharacteristic=new Array ; 
 objet["class"]["CORBAAny"]=0;
objet["class"][0]="../ObjectModelerCollection/class_CORBAAny_30063.htm";
objet["class"]["sequence"]=1;
objet["class"][1]="../ObjectModelerCollection/class_sequence_30463.htm";
objet["define"]["E_KEYNOTFOUND"]=0;
objet["define"][0]="../ObjectModelerCollection/define_E_KEYNOTFOUND_34043.htm";
objet["define"]["E_NOLOCALVALUE"]=1;
objet["define"][1]="../ObjectModelerCollection/define_E_NOLOCALVALUE_34817.htm";
objet["define"]["E_NOTALIST"]=2;
objet["define"][2]="../ObjectModelerCollection/define_E_NOTALIST_31524.htm";
objet["define"]["E_OUTOFBOUND"]=3;
objet["define"][3]="../ObjectModelerCollection/define_E_OUTOFBOUND_33034.htm";
objet["define"]["E_TYPEMISMATCH"]=4;
objet["define"][4]="../ObjectModelerCollection/define_E_TYPEMISMATCH_34827.htm";
objet["define"]["max"]=5;
objet["define"][5]="../ObjectModelerCollection/define_max_28325.htm";
function getDsCharacteristic(name,itype) { 
     var dsCh = null; 
     if (name!=null && itype!=null && itype == "class") { 
         dsCh = DSCharacteristic[name]; 
     } 
     if (dsCh == null) { 
        dsCh=itype; 
    }   
    return dsCh; 
 } 
 function locateObject(name,itype,NorP){ 
 if(name==null || itype==null || NorP==null) return 0; 
 var type = getDsCharacteristic(name,itype);    
 var findnum=objet[type][name]; 
 var findobj;   
 if(NorP==1 && findnum!=null){ findobj=objet[type][findnum+1];} 
 else {findobj=objet[type][findnum-1];}       
 //alert(findobj); 
 if(findobj!=null){      
   return 1; 
 }else{ 
    return 0; 
 } 
 } 
 function openLinkNP(name,itype,NorP){ 
 if(name==null || itype==null || NorP==null) return 0; 
 var type = getDsCharacteristic(name,itype);    
 var findnum=objet[type][name]; 
 var findobj;   
 if(NorP==1 && findnum!=null){ findobj=objet[type][findnum+1];} 
 else {findobj=objet[type][findnum-1];}       
 //alert(findobj); 
 if(findobj!=null){ 
     this.location=findobj; 
 } 
 }