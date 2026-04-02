#ifndef CATITTRS_H
#define CATITTRS_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTTRSItf.h" 
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATIRGE.h"
#include "CATMathRGE.h"
#include "CATMmrTTRSRepresented.h"
#include "CATListPV.h"

/**
 * Definition of TTRS types.
 * @param CATMmrSupportTTRS
 * The support type
 * @param CATMmrNodeTTRS
 * The node type
 */
enum CATMmrTTRSType { CATMmrSupportTTRS , CATMmrNodeTTRS };


/**
 * Type definition for TTRS validity state.
 * <b>Role</b>: states include different value:
 * <ul><li>CATMmrTTRSValidity_OK
 * <li>CATMmrTTRSValidity_NotBuilt
 * <li>CATMmrTTRSValidity_DestroyedComp
 * <li>CATMmrTTRSValidity_ModifClass
 * <li>CATMmrTTRSValidity_ModifAssocCase
 * <li>CATMmrTTRSValidity_ModifFoS
 * <li>CATMmrTTRSValidity_InvalidComp
 * <li>CATMmrTTRSValidity_Unresolved
 * <li>CATMmrTTRSValidity_VisuMode</ul>
 */
typedef unsigned long CATMmrTTRSValidityState;

/** @nodoc */
#define CATMmrTTRSValidity_OK                      (0)
/** @nodoc */
#define CATMmrTTRSValidity_NotBuilt                (1 << 1)
/** @nodoc */
#define CATMmrTTRSValidity_DestroyedComp           (1 << 3)
/** @nodoc */
#define CATMmrTTRSValidity_ModifClass              (1 << 4)
/** @nodoc */
#define CATMmrTTRSValidity_ModifAssocCase          (1 << 5)
/** @nodoc */
#define CATMmrTTRSValidity_ModifAdmissibleType     (1 << 6)
/** @nodoc */
#define CATMmrTTRSValidity_ModifSurfCanonicity     (1 << 7)
/** @nodoc */
#define CATMmrTTRSValidity_ModifFoS                (1 << 8)
/** @nodoc */
#define CATMmrTTRSValidity_InvalidComp             (1 << 9)
/** @nodoc */
#define CATMmrTTRSValidity_Unresolved              (1 << 10)
/** @nodoc */
#define CATMmrTTRSValidity_VisuMode                (1 << 11)
/** @nodoc */
#define CATMmrTTRSValidity_InvalidRepresented      (1 << 12)
/** @nodoc */
#define CATMmrTTRS_NotPresent                      (1 << 13)

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTTRSItf IID IID_CATITTRS; 
#else
extern "C" const IID IID_CATITTRS;
#endif

class CATITTRS_var;

/**
 * Interface representing TTRS ( Technologically and Topologically Related Surfaces ).
 * <b>Role</b>: <b>TTRS</b> add technological and topological pieces of information to surface associations.
 */
class ExportedByCATTTRSItf CATITTRS: public CATBaseUnknown
{
  CATDeclareInterface;

  public :

    /** 
     * Gets the class of the TTRS.
     * @param oTTRSClass
     * The class of the TTRS.
     * <br><b>Legal values</b>: Spherical, Planar, Cylindrical, Revolute, Prismatic, Complex.
     */
    virtual HRESULT GetTTRSClass (CATMmrTTRSClass& oTTRSClass) const = 0;

    /**
     * @nodoc
     * use CATITTRS::GetMRGE(CATMathRGE*& oMrge)
     * Gets the MRGE ( <b>M</b>inimum <b>R</b>epresentation <b>G</b>eometrical <b>E</b>lement ) of the TTRS.
     * @param oMrge
     * The MRGE of the TTRS.
     */
    virtual HRESULT GetMRGE (CATIRGE_var& oMrge) const = 0; 

    /**
     * Returns the nature of the TTRS.
     * <br><b>Legal values</b>:
     * <tt>Support</tt> if it directly represents geometry.
     * <tt>Node</tt> if it represents higher level TTRS.
     */
    virtual CATMmrTTRSType GetNature () const = 0;

    /**
     * Gets the list of the 2 to n components of the TTRS.<br>
     * @param oListe
     * The list of components.
     * <ul><li>either 1 to n RGEs ( Support TTRS ) <br>
     * <li>or 2 to n TTRS ( Node TTRS ) </ul>
     */
    virtual HRESULT GetComponents (CATLISTV(CATBaseUnknown_var)& oListe) const = 0;

    /**
     * Adds a component to a TTRS.
     * @param iNewComponent
     * <ul><li>either a RGE  (Support TTRS ) </li>
     * <li>or a TTRS ( Node TTRS )</li></ul>
     */
    virtual HRESULT AddComponent (CATBaseUnknown_var& iNewComponent) = 0;

    /**
     * Removes a component from a TTRS.
     * @param iComponent
     * The component to be removed.
     */
    virtual HRESULT RemoveComponent (CATBaseUnknown_var& iComponent) = 0;

    /**
     * @nodoc
     * Gets the list of current TTRS's constructedRGE.
     * <br>Constructed RGEs are additional wireframe elements to position the TTRS.
     * <br>They always respect current TTRS's class.
     * <br>example: you can add to a revolute TTRS a constructed RGE corresponding 
     * to a plane if this plane is normal to the axis of revolution.
     * @param oListe
     * The list of the constructed RGE.
     */
    virtual HRESULT GetConstructedRGEs (CATLISTV(CATBaseUnknown_var)& oListe) const = 0;

    /**
     * @nodoc
     * Adds a constructed RGE according to current TTRS's class.
     * @param iNewConstructedRGE
     * The constructed RGE to be added.
     */
     virtual HRESULT AddConstructedRGE (CATIRGE_var& iNewConstructedRGE) = 0;

    /**
     * @nodoc
     * Removes a constructed RGE.
     * @param iConstructed RGE
     * The constructed RGE to be removed.
     */
     virtual HRESULT RemoveConstructedRGE (CATIRGE_var& iConstructedRGE) = 0;

    /**
     * Retrieves the represented TTRS.
     * The represented TTRS is a TTRS which is represented by this.
     * @param opiTTRS
     *   The TTRS which is represented by this.
     */
    virtual HRESULT GetRepresentedTTRS (CATITTRS ** opiTTRS) const = 0;

    /**
     * Sets the represented TTRS.
     * @param ipiTTRS
     *   The TTRS which is represented by this.
     */
    virtual HRESULT SetRepresentedTTRS (const CATITTRS * ipiTTRS) = 0;

    /**
     * Retrieves the nature of the link with the represented TTRS.
     * @param oLinkNature
     *   Nature of the link.
     */
    virtual HRESULT GetRepresentedTTRSLink (CATMmrTTRSRepresented * oLinkNature) const = 0;

    /**
     * Sets the nature fo teh link with the represented TTRS.
     * @param iLinkNature
     *   Nature of the link.
     */
    virtual HRESULT SetRepresentedTTRSLink (const CATMmrTTRSRepresented iLinkNature) = 0;

     /**
     * @nodoc
     * use CATITTRS::GetValidityState
     * Returns 1 if the TTRS is valid, ie when its components would create a new TTRS of the same class.
     */
    virtual int IsValid () = 0;

    /**
     * Returns the state of validity of the TTRS.
     * @return
     * The call status.
     * <br><b>Legal values</b>: CATMmrTTRSValidity_OK, CATMmrTTRSValidity_DestroyedComp, 
     * CATMmrTTRSValidity_ModifClass, CATMmrTTRSValidity_ModifAssocCase, 
     * CATMmrTTRSValidity_ModifFoS, CATMmrTTRSValidity_InvalidComp, CATMmrTTRSValidity_Unresolved.
     */
    virtual CATMmrTTRSValidityState GetValidityState () = 0;

    /**
     * @nodoc
     * Method to be transfered on CATITTRSAdvanced
     * Returns the value of the FeatureOfSize parameter (container / contents, etc).
     * The value used at first by tolerancing applications can be shared with others.
     */
    virtual int GetFeatureOfSize () const = 0;

    /**
     * @nodoc
     * Method to be transfered on CATITTRSAdvanced
     * Sets the value of the FeatureOfSize parameter.
     * @param iFOS
     * The value of the FeatureOfSize parameter.
     */
    virtual HRESULT SetFeatureOfSize (int iFOS) = 0;

    /**
     * Gets the MRGE ( <b>M</b>inimum <b>R</b>epresentation <b>G</b>eometrical <b>E</b>lement ) of the TTRS.
     * @param oMrge
     * The MRGE of the TTRS.
     */
    virtual HRESULT GetMRGE (CATMathRGE*& oMrge) const = 0;

    /**
     * @nodoc
     * Gets the geometry path id of the TTRS.
     * @param oListPathGeomId
     * The list of CATListOfInt.
     */
    virtual HRESULT GetGeomPathId ( CATListPV* oListPathGeomId ) const = 0;

};
CATDeclareHandler(CATITTRS, CATBaseUnknown);
#endif


