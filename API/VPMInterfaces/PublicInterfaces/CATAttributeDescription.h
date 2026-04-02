#ifndef CATIVpmCA_H
#define CATIVpmCA_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1997                           
// =================================================================   
// Historique:                                                          
// April 97 - AHC : Creation
// =================================================================   
//
#include "CATUnicodeString.h"
#include "VPMIDicElement.h"
//
//
//  AccessVisibillty specification
//
//  PUBLIC   = 1
//  PROTECTED= 2  
//  PRIVATE  = 3 
//
enum AccessVisibility {AccPublic=1,AccProtected=2,AccPrivate=3};
//
//  AccessMode specification
//
//  RR -> Get the readonly  Attributs
//  RW -> Get the readwrite Attributs
//  WW -> Get the write     Attributs
//
enum AccessMode {WW=1,RW=2,RR=4};
//
//  AccessControl specification (like chmod UNIX)
//
enum AccessControl {AC0=0,AC1=1,AC2=2,AC3=3,AC4=4,AC5=5,AC6=6,AC7=7};
//
// ======================================================
//  Attribut definition 
// ======================================================
//
//  BaseType specification
// --------------------
//
//  SIMPLE        -> simple   Attribute
//  ENTITY        -> entity   Attribute
//  AGGREGAT      -> aggregte Attribute
//
enum BaseTypeOfAttr {SIMPLE=0, REFERENCE=1 , AGGREGAT=2, NOTDEFINED=100 }; 
//
//  Type specification
// --------------------
//
//  BINARY        -> binary Attribute
//  BOOLEANS      -> boolean Attribute
//  INTEGER       -> integer Attribute
//  LOGICAL       -> logical Attribute
//  REAL          -> real Attribute
//  STRING        -> string Attribute
//  ENTITY        -> entity Attribute
//  DEFINED_TYPE  -> defined type Attribute
//  ARRAY         -> array aggregat Attribute
//  LIST          -> list aggregat Attribute
//  SET           -> set aggregat Attribute
//  BAG           -> bag aggregat Attribute
//  ENUMERATION   -> enumeration Attribute
//  SELECT        -> select Attribute
//  DATETIME      -> date time Attribute
//  UNDEFINED     -> UNDEFINED Attribute
//
//  TypeOfAttr  
//
enum TypeOfAttr {BOOLEANS=0     , LOGICAL=1 , BINARY=2      , INTEGER=3,
                 REAL=4         , ENTITY=5  , DEFINED_TYPE=6, STRING=7 ,
                 ARRAY=8        , LIST=9    , SET=10        , BAG=11   ,
                 ENUMERATION=12 , SELECT=13 , DATETIME=14   ,
                 UNDEFINED=100};
//
//  KindOf specification
// - --------------------
//
//  INVERSE       -> inverse Attribute
//  EXPLICIT      -> explicit Attribute 
//  DERIVED       -> Dervided Attribute) 
//
enum KindOfAttr {EXPLICIT=0, INVERSE=1 , DERIVED=2 , UNDEF=100 }; 
//
// Optional Flag 
// - --------------------
//
//  OPT      -> Optional Attribute 
//  NOTOPT   -> Not Optional  Attribute 
//
enum OptionalFlag {NOTOPT=0, OPT=1 }; 
//
// Event  Flag 
// - --------------------
//
//  NOTNOTICIABLE  -> not raise event  
//  NOTICIABLE     -> raise event 
//
enum EventFlag {NOTNOTICIABLE=0, NOTICIABLE=1 }; 

/**
 * A 'VPMCA' structure is what's stored in the ENOVIPropertyInfo object in the ENOVIObjectInfo.
 * For each attribute of each entity there's a VPMCA created when loading the package the entity
 * belongs to. VPMCA's are shared, there can only be one copy of a given attribute's VPMCA at any time
 * (this means that you must not refer to it by value, always by reference). VPMCA's are destroyed
 * when the PropertyInfo that owns them is destroyed, which happens when the PackageInfo (and thus
 * the ObjectInfo) is destroyed, that is at the end of the Enovia session.
 *
 **/
typedef struct AttributeDescription
  {
  void*                _RealAttrDef; // SDAI attrdef.
  VPMIDicElement*      _DicElem    ;
  int                  _Length ; 
  BaseTypeOfAttr       _Base;
  TypeOfAttr           _Type;
  TypeOfAttr           _AggrType;
  KindOfAttr           _KindOf;
  AccessMode           _Mode;
  AccessVisibility     _Visibility;
  OptionalFlag         _Mandatory  ;
  EventFlag            _EventFlag  ;
  
  CATUnicodeString     _EntityName; // these 3 now use proper CATUnicodeString string data sharing.
  CATUnicodeString     _Name;
  CATUnicodeString     _Alias;
  CATUnicodeString     _Magnitude;
} VPMCA ; 
//
#endif
