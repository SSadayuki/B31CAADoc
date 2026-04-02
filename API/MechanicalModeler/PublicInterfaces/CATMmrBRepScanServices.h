#ifndef  CATMmrBRepScanServices_H  
#define  CATMmrBRepScanServices_H

// COPYRIGHT Dassault Systemes 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include  "CATBaseUnknown.h"
#include  "CATMechanicalModeler.h"

#include "CATLISTV_CATISpecObject.h" 
  

class CATIBRepAccess;
class CATISpecObject;
 /**  
  *  Class providing services which allow the traversal of a part through selecting objects.
  */
  
class  ExportedByCATMechanicalModeler CATMmrBRepScanServices  
{  
  public:  
         /**  
          *  Retrieves the corresponding selecting object in the copied or reference feature.<br>
          *  <br>
          *  <b>Role</b>: This method retrieves the corresponding selecting object in the copied/reference feature, when given a selecting object in the reference/copied feature respectively.<br>
          *  It succeeds in finding the dual selecting object only in the <b><tt>Paste As Result With Link</tt></b> and <b><tt>Paste As Result</tt></b> cases. This service does not work in the case of <b><tt>Paste As Spec</tt></b>.<br>
          *  <br>
          *  The reference feature should be copied using a constructor of <tt>CATMmrInterPartCopy</tt>.<br>
          *  Subsequently, the method presented here may be called right after the copy-paste operation.<br>
          *  Note:<br>
          *       <ul>          
          *         <li>The results are not guaranteed if an action on the model such as <b><tt>Save</tt></b> has been done before calling the method presented here.</li>
          *       </ul>
          *       <br>
          *  <br>
          *  @param   iRefSpecObject
          *         The reference feature.<br>
          *         This is a mechanical feature, which can be a surfacic element (curve, line) or a sketch, or a solid body (PartBody, Body).<br>
          *         see @href CATMmrInterPartCopy#CATMmrInterPartCopy.<br>
          *         Note:<br>
          *         <ul>
          *           <li>This parameter can be NULL in the case of a <b><tt>Paste As Result with Link</tt></b>, in which case the reference feature is internally retrieved by using <tt>iCopySpecObject</tt>.</li>
          *           <li>This parameter must not be omitted in the case of <b><tt>Paste As Result</tt></b>.</li>
          *         </ul>
          *         <br>
          *  <br>
          *  @param   iCopySpecObject
          *         The copied feature.<br>
          *         This feature results from a copy-paste operation (except <b><tt>Paste As Spec</tt></b>) of the reference feature <tt>iRefSpecObject</tt>.<br>
          *         Note:<br>
          *         <ul>
          *           <li>This parameter must not be NULL.</li>
          *         </ul>
          *         <br>
          *  <br>
          *  @param  ioRefBRepAccess
          *         The input or output selecting object.<br>
          *         <ul> 
          *           <li>When this parameter is NULL, it is used as the output corresponding to the input in the copied feature: <tt>ioCopyBRepAccess</tt>.</li>
          *           <li>When this parameter is not NULL, it is used as an input in order to get the corresponding output in the copy: <tt>ioCopyBRepAccess</tt>.</li>
          *         </ul>
          *         Note:<br>
          *         <ul>
          *           <li>When this parameter is NULL, <tt>ioCopyBRepAccess</tt> must not be NULL.</li>
          *           <li>This parameter must not be NULL when <tt>ioCopyBRepAccess</tt> is NULL.</li>
          *         </ul>
          *         <br>
          *  <br> 
          *  @param   ioCopyBRepAccess
          *         The input or output selecting object.<br>
          *         <ul> 
          *           <li>When this parameter is NULL, it is used as the output corresponding to the input in the reference feature: <tt>ioRefBRepAccess</tt>.</li>
          *           <li>When this parameter is not NULL, it is used as an input in order to get the corresponding output in the reference: <tt>ioRefBRepAccess</tt>.</li>
          *         </ul>
          *         Note:<br>
          *         <ul>
          *           <li>When this parameter is NULL, <tt>ioRefBRepAccess</tt> must not be NULL.</li>
          *           <li>This parameter must not be NULL when <tt>ioRefBRepAccess</tt> is NULL.</li>
          *         </ul>
          *         <br>
          *  <br>                 
          *  @return 
          *         <ul>
          *           <li>S_OK if the interface <tt>CATIBRepAccess</tt> of the dual selecting object has been found.</li>
          *           <li>E_FAIL if the interface to the dual selecting object has not been found.</li>
          *           <li>E_INVALIDARG if <tt>iCopySpecObject</tt> is NULL.</li>
          *           <li>E_INVALIDARG if <tt>iRefSpecObject</tt> is NULL and no reference feature could be retrieved by <tt>iCopySpecObject</tt> (e.g. in the case of a <tt>Paste As Result</tt>).</li>
          *           <li>E_INVALIDARG if <tt>iRefSpecObject</tt> is not NULL and the feature does not match the one referred to by <tt>iCopySpecObject</tt>.</li>
          *           <li>E_INVALIDARG if <tt>ioRefBRepAccess</tt> is NULL and <tt>ioCopyBRepAccess</tt> is NULL too.</li>
          *           <li>E_INVALIDARG if <tt>ioRefBRepAccess</tt> is not NULL and <tt>ioCopyBRepAccess</tt> is not NULL either.</li>
          *           <li>E_UNEXPECTED in case an unexpected internal error occurs.
          *         </ul>
          */  
        static HRESULT FindDualBRepAccess( const CATISpecObject* iRefSpecObject, const CATISpecObject* iCopySpecObject, CATIBRepAccess** ioRefBRepAccess , CATIBRepAccess** ioCopyBRepAccess ); 

        /**  
          *  Retrieves all the ancestors since the generation feature from a selecting object.<br>
          *  <br>
          *  <b>Role</b>: This method retrieves all the ancestors features since the generation feature from a selecting object.<br>
          *  <br>
          *  @param   iBRepAccess
          *         The selecting object.<br>
          *  <br>
          *  @param   ioAncestorsFeatures
          *         The method appends the list of ancestors features of the selecting object to the input list.<br>
          *         The features are ordered from the most recent feature to the oldest feature.<br> 
          *  <br>
          *  @return 
          *         <ul>
          *           <li>S_OK if the list of ancestors features of the selecting object has been found.</li>
          *           <li>E_FAIL if the list of ancestors features of the selecting object has not been found.</li>
          *           <li>E_INVALIDARG  if <tt>iBRepAccess</tt> is NULL.</li>
          *         </ul>
          */  
        static HRESULT ListAncestorsSinceGenerationFeature(const CATIBRepAccess* iBRepAccess, CATLISTV(CATISpecObject_var) &ioAncestorsFeatures) ;    

        /**  
          *  Retrieves from a selecting object all the ancestors since the generation feature that modified the geometry.<br>
          *  <br>
          *  <b>Role</b>: This method retrieves from a selecting object all the ancestors features since the generation feature that modified the geometry of the selecting object.<br>
          *  <br>
          *  @param   iBRepAccess
          *         The selecting object.<br>
          *  <br>
          *  @param   ioAncestorsFeatures
          *         The method appends the list of ancestors features of the selecting object to the input list.<br>
          *         The features are ordered from the most recent feature to the oldest feature.<br> 
          *  <br>
          *  @return 
          *         <ul>
          *           <li>S_OK if the list of ancestors features of the selecting object has been found.</li>
          *           <li>E_FAIL if the list of ancestors features of the selecting object has not been found.</li>
          *           <li>E_INVALIDARG  if <tt>iBRepAccess</tt> is NULL.</li>
          *         </ul>
          */  
        static HRESULT ListFeaturesForGeometry(const CATIBRepAccess* iBRepAccess, CATLISTV(CATISpecObject_var) &ioAncestorsFeatures) ;  
  private:  
         CATMmrBRepScanServices();  
         ~CATMmrBRepScanServices();     
   };  
     
     
#endif  
     
