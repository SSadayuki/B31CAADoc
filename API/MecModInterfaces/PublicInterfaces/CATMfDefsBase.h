// COPYRIGHT DASSAULT SYSTEMES  2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef __CATMfDefsBase_h__
#define __CATMfDefsBase_h__
//
// Only MechanicalModeler can use these strings
//
#include "MecModItfCPP.h"

class CATUnicodeString;

// -------------- Liste des Noms de Feature -------------------------

// racine Mf pour MechanicalFeature 
ExportedByMecModItfCPP extern const CATUnicodeString MfMechanicalFeature;

// Les features aggregeant 
ExportedByMecModItfCPP extern const CATUnicodeString MfRoot;
ExportedByMecModItfCPP extern const CATUnicodeString MfPart;
ExportedByMecModItfCPP extern const CATUnicodeString MfTool;
ExportedByMecModItfCPP extern const CATUnicodeString MfGSMTool;

// Les features Wireframe 
ExportedByMecModItfCPP extern const CATUnicodeString MfWireframe;

// Les features relatifs au shape
ExportedByMecModItfCPP extern const CATUnicodeString MfInternalFeature;
ExportedByMecModItfCPP extern const CATUnicodeString MfUserFeature;

// Les features Geometriques  
// -------------------------
ExportedByMecModItfCPP extern const CATUnicodeString MfFeatureGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfGeomElt    ;
ExportedByMecModItfCPP extern const CATUnicodeString MfGeom2DWF   ;
ExportedByMecModItfCPP extern const CATUnicodeString MfGeom3DWF   ;

// dans le serie feature geometrique plus particulierement 
ExportedByMecModItfCPP extern const CATUnicodeString MfPointGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfPlaneGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfLineGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfSolidGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfSkinGeom;
ExportedByMecModItfCPP extern const CATUnicodeString MfImportedBody;

// Les features Brep 
ExportedByMecModItfCPP extern const CATUnicodeString MfBrep;

// dans la serie Brep plus particulierement 
ExportedByMecModItfCPP extern const CATUnicodeString MfVOLUME;
ExportedByMecModItfCPP extern const CATUnicodeString MfDOMAIN;
ExportedByMecModItfCPP extern const CATUnicodeString MfFSUR;
ExportedByMecModItfCPP extern const CATUnicodeString MfRSUR;
ExportedByMecModItfCPP extern const CATUnicodeString MfFEDGE;
ExportedByMecModItfCPP extern const CATUnicodeString MfREDGE;
ExportedByMecModItfCPP extern const CATUnicodeString MfFVERTEX;
ExportedByMecModItfCPP extern const CATUnicodeString MfBORDERREDGE;
ExportedByMecModItfCPP extern const CATUnicodeString MfWIREREDGE;
ExportedByMecModItfCPP extern const CATUnicodeString MfBORDERFVERTEX;
ExportedByMecModItfCPP extern const CATUnicodeString MfWIREFVERTEX;
ExportedByMecModItfCPP extern const CATUnicodeString MfAXIS;
ExportedByMecModItfCPP extern const CATUnicodeString MfEXTREMITY;
ExportedByMecModItfCPP extern const CATUnicodeString MfPLANARSUBELEMENT;
ExportedByMecModItfCPP extern const CATUnicodeString MfPOINTONEDGE;
ExportedByMecModItfCPP extern const CATUnicodeString MfBoundingPlane;
ExportedByMecModItfCPP extern const CATUnicodeString MfSuperBRepFeature;
ExportedByMecModItfCPP extern const CATUnicodeString MfIntersectionEdge;
ExportedByMecModItfCPP extern const CATUnicodeString MfInitialEdge;

// Les features Propagation
ExportedByMecModItfCPP extern const CATUnicodeString MfPropagation;
ExportedByMecModItfCPP extern const CATUnicodeString MfTangencyPropagation;
ExportedByMecModItfCPP extern const CATUnicodeString MfAdjacentPropagation;

// Les features Constraint 
ExportedByMecModItfCPP extern const CATUnicodeString MfConstraint;
ExportedByMecModItfCPP extern const CATUnicodeString MfConstraintASM;
ExportedByMecModItfCPP extern const CATUnicodeString MfConstraintPRT;
ExportedByMecModItfCPP extern const CATUnicodeString MfConstraintDYS;
ExportedByMecModItfCPP extern const CATUnicodeString MfCstType;
ExportedByMecModItfCPP extern const CATUnicodeString MfBloc;

// Les features visu des contraintes 
ExportedByMecModItfCPP extern const CATUnicodeString Mfstyle3d;
ExportedByMecModItfCPP extern const CATUnicodeString Mfdimension3d;
ExportedByMecModItfCPP extern const CATUnicodeString MficonicDimension3d;
ExportedByMecModItfCPP extern const CATUnicodeString MfMFstaticConstraint;
ExportedByMecModItfCPP extern const CATUnicodeString MfMFparameter;
ExportedByMecModItfCPP extern const CATUnicodeString MfMFconstraint;
ExportedByMecModItfCPP extern const CATUnicodeString MfMFiconsPlug;
ExportedByMecModItfCPP extern const CATUnicodeString MfMFdimension;




// -------------- Liste des Noms d'Attributs -------------------------

// racine Ma pour MechanicalAttribute  
ExportedByMecModItfCPP extern const CATUnicodeString MaResultOUT;
ExportedByMecModItfCPP extern const CATUnicodeString MaResultIN;

// Liste des attributs BRep externalises 
ExportedByMecModItfCPP extern const CATUnicodeString MaSupport;
ExportedByMecModItfCPP extern const CATUnicodeString MaLabel;

ExportedByMecModItfCPP extern const CATUnicodeString MaCurrentResolveScopeInfo;
ExportedByMecModItfCPP extern const CATUnicodeString MaBRepType;

ExportedByMecModItfCPP extern const CATUnicodeString MaSuperBRep;
ExportedByMecModItfCPP extern const CATUnicodeString MaIntersectionBRepShape1;
ExportedByMecModItfCPP extern const CATUnicodeString MaIntersectionBRepShape2;

ExportedByMecModItfCPP extern const CATUnicodeString MaAdjacentsLabels; 

// Liste des attributs Point On Edge externalises 
ExportedByMecModItfCPP extern const CATUnicodeString MaRatio;
ExportedByMecModItfCPP extern const CATUnicodeString MaSide;
ExportedByMecModItfCPP extern const CATUnicodeString MaXptOnEdge;
ExportedByMecModItfCPP extern const CATUnicodeString MaYptOnEdge;
ExportedByMecModItfCPP extern const CATUnicodeString MaZptOnEdge;

// Liste des attributs SuperBRep externalises 
ExportedByMecModItfCPP extern const CATUnicodeString MaPropagation;
ExportedByMecModItfCPP extern const CATUnicodeString MaSecours;
ExportedByMecModItfCPP extern const CATUnicodeString MaInits;

// Attribut permettant de gerer les configurations de soft associees a un feature
ExportedByMecModItfCPP extern const CATUnicodeString MaAlgorithmConfiguration;

// Attribut permettant de gerer les erreurs associees a un feature
ExportedByMecModItfCPP extern const CATUnicodeString MaUpdateError;
ExportedByMecModItfCPP extern const CATUnicodeString MaFormUpdateError;

// Liste des attributs relatifs a la liste chainee 
ExportedByMecModItfCPP extern const CATUnicodeString MaNext;
ExportedByMecModItfCPP extern const CATUnicodeString MaPrevious;


// Liste des attributs relatifs a la part 
ExportedByMecModItfCPP extern const CATUnicodeString CurrentFeature;
ExportedByMecModItfCPP extern const CATUnicodeString CurrentTool;
ExportedByMecModItfCPP extern const CATUnicodeString MainTool;


ExportedByMecModItfCPP extern const CATUnicodeString MfDefaultValuesBag;
ExportedByMecModItfCPP extern const CATUnicodeString MfPartProperties; 


ExportedByMecModItfCPP extern const CATUnicodeString MaFtrList; 
ExportedByMecModItfCPP extern const CATUnicodeString MaActivity; 
ExportedByMecModItfCPP extern const CATUnicodeString MaNewActivity; 


// Liste des attributs relatifs a la part : reference_plane 
ExportedByMecModItfCPP extern const CATUnicodeString MaReferencePlanes; 

// Liste des attributs relatif a l objet Part Properties 
ExportedByMecModItfCPP extern const CATUnicodeString MaDensity;
ExportedByMecModItfCPP extern const CATUnicodeString MaVolume;
ExportedByMecModItfCPP extern const CATUnicodeString MaMass;
ExportedByMecModItfCPP extern const CATUnicodeString MaWetArea;
ExportedByMecModItfCPP extern const CATUnicodeString MaCenterOfGravity;
ExportedByMecModItfCPP extern const CATUnicodeString MaInertiaMatrix;

//
// Liste des attributs relatif aux features pour la visu des contraintes 
ExportedByMecModItfCPP extern const CATUnicodeString A_vertical_offset;
ExportedByMecModItfCPP extern const CATUnicodeString A_center_offset;
ExportedByMecModItfCPP extern const CATUnicodeString A_vertical_callout_offset;
ExportedByMecModItfCPP extern const CATUnicodeString A_MAvalue;
ExportedByMecModItfCPP extern const CATUnicodeString A_elts;
ExportedByMecModItfCPP extern const CATUnicodeString A_type;
ExportedByMecModItfCPP extern const CATUnicodeString A_mode;
ExportedByMecModItfCPP extern const CATUnicodeString A_elt;
ExportedByMecModItfCPP extern const CATUnicodeString A_coords;
ExportedByMecModItfCPP extern const CATUnicodeString A_count;
ExportedByMecModItfCPP extern const CATUnicodeString A_MADvalue;
ExportedByMecModItfCPP extern const CATUnicodeString A_MADmath;
ExportedByMecModItfCPP extern const CATUnicodeString A_MADtype;


ExportedByMecModItfCPP extern const CATUnicodeString A_MADflags;
ExportedByMecModItfCPP extern const CATUnicodeString A_MADmode;


// Gestion des MfInput 
ExportedByMecModItfCPP extern const CATUnicodeString MfInput; 
ExportedByMecModItfCPP extern const CATUnicodeString MaPrdInput; 


// ----- enum definition for ProcReport CCP mechanism ------------------------------------------

ExportedByMecModItfCPP enum CATMfStoreProcReportNamingType { MfStandard,                     // Standard Mode
                                                             MfNamingWithLocation,           // Same parents & same name 
                                                             MfKeepNaming,                   // copy as result 
                                                             MfNamingWithoutLink,            // copy withlink or import (creation mode) -> nqming with bridge 
                                                             MfNamingWithLocation_Synchro,   // copy withlink or import (Synchro  mode) -> nqming with bridge 
                                                             MfNamingWithLocation_Replace,   // copy withlink or import (Replace  mode) -> nqming with bridge 
                                                             MfNamingWithLocation_Force,     // copy withlink or import (Force    mode) -> nqming with bridge 
                                                             MfModifyDatum } ;               // Same Name -> specific modifictaion of Result Fetaures free-style


// ----- this (idem GetImpl() en plus performant action Perfo cxr3) -------------------------
#ifndef MFThis
#define MFThis ((CATBaseUnknown *)this)
#endif

#endif

