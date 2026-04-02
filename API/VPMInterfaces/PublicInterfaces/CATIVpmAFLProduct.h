/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLProduct_H
#define CATIVpmAFLProduct_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLProduct ;
#else
extern "C" const IID IID_CATIVpmAFLProduct ;
#endif

class CATIVpmAFLAction_var; 
class CATIVpmAFLProductView_var;
class CATIVpmAFLProduct_var;
class CATICfgORExpression_var;
class CATListValCATIVpmAFLProductView_var;
class CATUnicodeString;
class CATTime;

#include "sequence_octet.h"

/**
 * Interface for AFLProduct objects. 
 * <b>Role</b>: The interface provides functions for accessing AFLProduct attributes.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLProduct : public  CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  //-----

  /**
   * Get the name of the Product.
   *  @param oName
   */             
  virtual HRESULT    GetName(CATUnicodeString& oName)=0;

  /**
   * Get the binary reference to the actual product object.
   *  @param oRef
   */             
  virtual HRESULT    GetIdentifier(SEQUENCE(octet)& oRef)=0;

  /**
   * Get all Product-Views associated with this Product.
   *  @param oListPV
   */             
    virtual HRESULT    GetAllProductViews(CATListValCATIVpmAFLProductView_var& oListPV)=0; 

  /**
   * Get the Action which this Product is associated with.
   *  @param oAction
   */             
  virtual HRESULT    GetRelatedAction(CATIVpmAFLAction_var& oAction)=0;

  /**
   * Get the creation date of the Product.
   *  @param oDate
   */             
   virtual    HRESULT GetCreationDate(CATTime& oDate)=0;

  /**
   * Get the last modification date of the product.
   *  @param oDate
   */             
   virtual    HRESULT GetLastModifDate(CATTime& oDate)=0;

  /**
   * Dump the Product attributes.
   *  @param iPrefix
   *   The prefix text for each output line.
   */
  virtual HRESULT    Dump(char* prefix)=0;


/////////////////////////////////////////////////////////////////////////////////////////////
// OBSOLETE IN V5R5
////////////////////////////////////////////////////////////////////////////////////////////

  /**
   * SetIdentifier: obsolete in V5R5  ( ASSERT ) DO NOT USE.
   * The identifier is set only once at creation using Action->AddPV()
   * @nodoc
   */             
    virtual HRESULT    SetIdentifier(const SEQUENCE(octet)& iIdentifier)=0; 

  /**
   * SetName: obsolete in V5R5 ( ASSERT ) DO NOT USE.
   * The name taken is the name of the product.
   * @nodoc
   */             
    virtual HRESULT    SetName(const CATUnicodeString& iType)=0; 
  /**
   * Delete: obsolete in V5R5 (ASSERT) DO NOT USE.
   * Instead USE ENOVILifeCycleObject interface.
   * @nodoc
   */             
    virtual HRESULT    Delete()=0;

  /**
   * GetReferXeff: obsolete in V5R5 (ASSERT) DO NOT USE.
   * @nodoc
   */             
    virtual HRESULT    GetReferXeff(const CATIVpmAFLProductView_var& iProductView,
                                    const CATUnicodeString& ApplicativeName,
                                    CATICfgORExpression_var& oEffectivity)=0;

  /**
   * CopyTo: obsolete in V5R5 (ASSERT) DO NOT USE.
   * Copy this product and all PV... into another Product.
   * @nodoc
   */
    virtual HRESULT    CopyTo(CATIVpmAFLProduct_var& oObj)=0; 

};
CATDeclareHandler (CATIVpmAFLProduct, CATBaseUnknown);
#endif
