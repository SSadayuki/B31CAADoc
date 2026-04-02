/* -*-c++-*- */
#ifndef CATMeasurableModes_H
#define CATMeasurableModes_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// COPYRIGHT   : DASSAULT SYSTEMES 2002
//
// DESCRIPTION : CATMeasurableModes class declaration
//
// May 2002  Creation: LFI
//
//=============================================================================
#include "CATMeasureGeometryInterfaces.h"
#include "CATBaseUnknown.h"  


enum CATMeasurableInterfaceCrossDetectionMode {MeasurableCrossDetectionNone, MeasurableCrossDetectionBest};

enum CATMeasurableInterfaceCanonicDetectionMode {MeasurableCanonicDetectionBest, MeasurableCanonicDetectionNotAvailableOnNonDecoratedSurfacicRep};

/*enum CATMeasurableInterfaceForceNeighbourMode {MeasurableForceNeighbourNone, MeasurableForceNeighbourBest};

enum CATMeasurableInterfaceForcePrimitiveMode {MeasurableForcePrimitiveNone, MeasurableForcePrimitiveBest};*/



class  CATMeasurableModes
{
    
    CATDeclareClass;
    
public:
    
    // The cross detection allows you to recognize cone,cylinder and circle as CATIMeasurableLine
    // It also allows you to recognize sphere as CATIMeasurablePoint
    // This mode is set by default to MeasurableCanonicDetectionBest which does not try to do cross detection 
    static  ExportedByCATMeasureGeometryInterfaces HRESULT SetCrossDetectionMode(CATMeasurableInterfaceCrossDetectionMode);
    static  ExportedByCATMeasureGeometryInterfaces HRESULT GetCrossDetectionMode(CATMeasurableInterfaceCrossDetectionMode &);
    
    // This mode is created for perfomance issue 
    // It allows you to not detect canonicity on some entities
    // This mode is set by default to MeasurableCanonicDetectionBest which always tries to detect canonicity
    static  ExportedByCATMeasureGeometryInterfaces HRESULT SetCanonicDetectionMode(CATMeasurableInterfaceCanonicDetectionMode);
    static  ExportedByCATMeasureGeometryInterfaces HRESULT GetCanonicDetectionMode(CATMeasurableInterfaceCanonicDetectionMode &);


    /*    static  HRESULT SetCrossNeighbourMode(CATMeasurableInterfaceForceNeighbourMode);
    static  HRESULT GetCrossNeighbourMode(CATMeasurableInterfaceForceNeighbourMode &);
    
      static  HRESULT SetCrossPrimitiveMode(CATMeasurableInterfaceForcePrimitiveMode);
    static  HRESULT GetCrossPrimitiveMode(CATMeasurableInterfaceForcePrimitiveMode &);*/
    
    //*********************************
    // Warning do not use this methode
    static ExportedByCATMeasureGeometryInterfaces int  _CrossDetectionV4;

private:
    
    static ExportedByCATMeasureGeometryInterfaces CATMeasurableInterfaceCrossDetectionMode   _CrossDetection;
    static ExportedByCATMeasureGeometryInterfaces CATMeasurableInterfaceCanonicDetectionMode _CanonicDetection;
    
};


#endif
