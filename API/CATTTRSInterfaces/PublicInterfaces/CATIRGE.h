#ifndef CATIRGE_h
#define CATIRGE_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTTRSItf.h" 
#include "CATBaseUnknown.h"
#include "CATMmrTTRSClass.h"
class CATMathPoint;
class CATMathLine;
class CATMathPlane;
class CATMathRGE;
class CATPoint_var;
class CATLine_var;
class CATPlane_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTTRSItf IID IID_CATIRGE;
#else
extern "C" const IID IID_CATIRGE;
#endif

/**
  * Interface representing RGEs (Reference Geometrical Elements).
  * <b>Role</b>: RGE is one of the two main concepts of the TTRS theory.
  * <ul> <li>It is a handle representing either a surface, or one to three wireframes elements. </li>
  * <li>It respects the six TTRS class.</li>
  * <li>It is made up of a point and/or a line and/or a plane.</li></ul>
  */
class ExportedByCATTTRSItf CATIRGE: public CATBaseUnknown
{
  CATDeclareInterface;

  public :

   /** 
    * Gets the TTRS Class of the RGE.
    * @param oTTRSClass
    *   The TTRS class of the RGE
    *   <br><b>Legal values</b>: There are six classes of surfaces, TTRS and RGE :
    *   <pre>Spherical, Planar, Cylindrical, Prismatic, Revolute, Complex</pre>
    */
    virtual HRESULT	GetTTRSClass(CATMmrTTRSClass& oTTRSClass) const = 0;

   /**
    * Returns the geometrical element associated to the RGE.
    * @param oReferencedGeometry
    *   In general, oReferencedGeometry is a feature representing a relimited surface.
    *   <br>GeometricalElement may be NULL in case of a RGE representing <b>several</b> wireframe features :
    *   <br>For example : a point and a line for a Revolute RGE. 
    *   <br>In that case, use GetReferencedGeometry(CATPoint_var, CATLine_var, CATPlane_var)
    */
    virtual HRESULT	GetReferencedGeometry (CATBaseUnknown_var& oReferencedGeometry) const = 0 ;	

   /**
    * Gets the one to three geometrical elements associated to the RGE if they exist (skeleton model).
    * <br>(to be used only if GetReferencedGeometry(CATBaseUnknown_var) returns nothing).
    * @param oPoint
    *   The point.
    * @param oLine
    *   The line.
    * @param oPlane
    *   The plane.
    */
    virtual HRESULT	GetReferencedGeometry(CATPoint_var& oPoint, CATLine_var& oLine, CATPlane_var& oPlane) const = 0 ;	

   /**
    * Replaces the single geometrical element associated to the RGE by another of the same TTRS Class <br>
    * @param iNewGeometry
    *   The replacing geometry.
    */
    virtual HRESULT	ReplaceReferencedGeometry(CATBaseUnknown_var& iNewGeometry) = 0 ;

   /**
    * Replaces the geometrical elements associated to the RGE by one to three GeometricalElements.
    * <br>Typical usage are skeleton models: to replace a conic RSUR by a point (the apex) and a line (the axis).
    * @param oPoint
    *   The point.
    * @param oLine
    *   The line.
    * @param oPlane
    *   The plane.
    */
    virtual HRESULT	ReplaceReferencedGeometry(CATPoint_var& oPoint, CATLine_var& oLine, CATPlane_var& oPlane) = 0 ;

   /**
    * Computes its corresponding CATMathRGE.
    * You just have to ask this CATMathRGE for its coordinates (CATMathPoint, CAMathLine, CATMathPlane).
    * @param oMathRGE
    *   The CATMathRGE.
    */
    virtual HRESULT	GetMathRGE(CATMathRGE* &oMathRGE) const = 0;

  private:

};

CATDeclareHandler(CATIRGE, CATBaseUnknown);

#endif
