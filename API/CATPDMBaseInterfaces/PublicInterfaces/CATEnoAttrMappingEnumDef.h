// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEnoAttrMappingEnumDef.h
// Header definition of CATEnoAttrMappingEnumDef
//
//===================================================================
//
// Usage notes: This class includes all the enum definitiones required for 
//              Attribute Mapping between CATIA and ENOVIA
//
//===================================================================
//
//  May 2003  Creation                                    AIH
//===================================================================

#ifndef CATEnoAttrMappingEnuDef_H
#define CATEnoAttrMappingEnuDef_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

class CATEnoAttrMappingEnumDef
{
public:
  
  // ENOVIA entities involved
  enum ENOVIASubEntities 
  {
    PM,
    PV,
    II,
    DM,
    DV
  };

  // Possible action on attributes (such binary mask are possible)
  enum AttributeActions
  {
    visible  = 0x1,
    editable = 0x2
  };

  // Possible type of the atributes
  enum AttributeTypes
  {
    INT,
    DOUBLE,
    TEXT,
    BOOLEAN
    // + more 
  };

  enum EntityTypes 
  {
    PART,   // In the LCA sense, hence product component or part in CX
    DOCUMENT
  };

  // The value of domain is got from 
  //  1. A0416498 - New member for No Domain
  //  2./ User Exit
  //  3./ Attribute of part/document
  //  4./ Fixed Value
  enum DefinitionType 
  {
    NoDomainDefined   = -1,     ///// A0416498 - New member as SAVE is KO
    UE,                   
    AttrValue,
    FixedVal
  };

};
#endif
