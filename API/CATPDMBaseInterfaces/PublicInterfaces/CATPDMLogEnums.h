// COPYRIGHT Dassault Systemes 2000
//===================================================================
//

/**
* @CAA2Level L1
*/

// CATPDMLogEnums.h
// Header definition of CATPDMLogStatus
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Sep 2000  Creation                                    GDC
//  Oct-02    Moving to CATPDMBaseInterfaces and renaming JRZ
//===================================================================
#ifndef CATPDMEnums_H
#define CATPDMEnums_H

  /** 
   * CATPDMLogStatus (Status of a log element) =>
   * CATPDMLogStatusError    = -1
   * CATPDMLogStatusNull     =  0
   * CATPDMLogStatusNew      =  1
   * CATPDMLogStatusModified =  2
   * CATPDMLogStatusDeleted  =  3
   * CATPDMLogStatusReplace = 4
   */
enum  CATPDMLogStatus { CATPDMLogStatusError    = -1,
CATPDMLogStatusNull     =  0,
CATPDMLogStatusNew      =  1,
CATPDMLogStatusModified =  2,
CATPDMLogStatusDeleted  =  3,
CATPDMLogStatusReplace = 4};

  /** 
   * CATPDMModType (Type of a log element) =>
   * Name
   * Nomenclature
   * Description
   * Source
   * Definition
   * Responsible
   * Version
   * Move
   * LifeCycle
   * Data
   * Link
   * Update
   * UserAttribute
   * AttMappingOnly
   * TreeOrder
   */
enum  CATPDMModType { Name, Nomenclature, 
Description, Source, Definition, 
Responsible, Version, Move, 
LifeCycle, Data, Link, Update, UserAttribute, AttMappingOnly, TreeOrder };
#endif
