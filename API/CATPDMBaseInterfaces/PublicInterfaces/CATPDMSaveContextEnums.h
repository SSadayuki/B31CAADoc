// ------------------------------------------------------------------  
// COPYRIGHT Dassault Systemes 2014
//===================================================================
//  
/**
* @CAA2Level L1
*/  
// CATPDMSaveContextEnums.h
// Header definition of CATPDMSaveContextEnums
//
//===================================================================
// Usage notes:
//===================================================================
//  Jan 2014  Creation  VPW/UJ2
//===================================================================
#ifndef CATPDMSaveContextEnums_H
#define CATPDMSaveContextEnums_H  
/** 
*CATPDMSaveContext (Context of save) =>
*SaveContextNoSave            =  0
*SaveContextSetPDMProperties  =  1
*SaveContextSave              =  2
*SaveContextSaveAsNewVersion  =  3
*/
enum  CATPDMSaveContext { SaveContextNoSave            =  0,
    SaveContextSetPDMProperties  =  1,
    SaveContextSave              =  2,
    SaveContextSaveAsNewVersion  =  3};

#endif
