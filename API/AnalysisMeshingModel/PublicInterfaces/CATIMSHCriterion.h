#ifndef  CATIMSHCriterion_h 
#define  CATIMSHCriterion_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U4 CATMSHExtICriterion 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATIMSHConnectivity;
class CATMSHGeometricalEngine;
class CATUnicodeString;

/**
 * Informations on the quality criterion.
 */
struct CATMSHCriterionInfos
{
/**
 *   <br><b>Legal values</b>:
 *   <dl><dt>1</dt><dd>Increasing criteria (biggest value is the best).
 *   <dt>0</dt><dd>Decreasing criteria (smallest value is the best).
 *   </dl>
 */
  int    Sens;
/**
 *   Best value.
 */
  double Best;
/**
 *   Default warning value: limit between a good and a poor criterion value.
 */
  double Warning;
/**
 *   Default error value: limit between a poor and a bad criterion value.
 */
  double Error;
/**
 *   Worst value.
 */
  double Worst;
};

extern ExportedByMSHModel IID IID_CATIMSHCriterion;

/**
 * Interface representing a finite element quality criterion.
 * <b>Role</b>: This interface should be re-implemented in order to add a new quality criteria 
 * in the finite element quality analysis.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHCriterion : public CATBaseUnknown 
{     
  CATDeclareInterface;
public: 
/**
 * Returns the name of the quality criterion.
 */
  virtual const CATUnicodeString & GetName () const =0;
/**
 * Returns the name of the unit of criteria, empty string by default
 * @return
 *   <br><b>Possible values</b>:
 *   <dl><dt>"Length"</dt><dd>The criterion is a length.
 *   <dl><dt>"Angle"</dt><dd>The criterion is an angle.
 *   <dl><dt>""</dt><dd>Empty string for criterion whitout unit.
 *   <dl><dt>"xx"</dt><dd>Any name of magnitude compatible with CATParmDictionary.
 *   </dl>
 */
  virtual const CATUnicodeString & GetMagnitude () const =0;
/**
 * Determines whether the criterion can be computed for a given connectivity or not.
 * @param iConnectivity
 *   The finite element connectivity to be tested.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The criterion can be computed.
 *   <dt>E_FAIL</dt><dd>The criterion has no meaning.
 *   </dl>
 */
  virtual HRESULT IsImplemented ( const CATIMSHConnectivity * iConnectivity ) =0;
/**
 * Returns informations on the quality criterion such as minimum and maximum value ...
 */
  virtual const CATMSHCriterionInfos * GetInfos () const =0;
/**
 * Computes the criterion for an finite element.
 * @param iGeometricalEngine
 *   Object which handles all informations on the finite element.
 * @param ioCriterion
 *   The computed value of the quality criterion.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The computation is succesfull.
 *   <dt>E_FAIL</dt><dd>The computation failed.
 *   </dl>
 */
  virtual HRESULT Compute ( CATMSHGeometricalEngine * iGeometricalEngine , double & ioCriterion ) =0;
/**
 * Returns if the criterion is useful by the mesh analysis quality.

 * @return
 *   An int.
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>The criterion is ignored.
 *   <dt>1</dt><dd>The criterion is use.
 *   </dl>
 */
  virtual int IsVisible () const =0;
/**
 * Returns if the criterion needs geometric support.

 * @return
 *   An int.
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>The criterion don't need geometric support.
 *   <dt>1</dt><dd>The criterion needs geometric support.
 *   </dl>
 */
  virtual int NeedGeometricSupport () const =0;

};

CATDeclareHandler ( CATIMSHCriterion , CATBaseUnknown );

#endif
