// COPYRIGHT DASSAULT SYSTEMES 2004
//**********************************************************************
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

//===================================================================
//
// CATDECProductToProductConvertor.h
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATDECProductToProductConvertor_H
#define CATDECProductToProductConvertor_H

#include "CATDECProductToPartCAA.h"
#include "CATUnicodeString.h"
class CATDocument;

/**
 * Create a new CATProduct from a CATProduct
 * <br> 
 * <b>Role</b>: This service is used to convert a Product into a Product.
 * <br> 
 * <b>Usage</b>:
 *    <ul><li>Create convertion operator by CATCreateProductToProductConvertor (CATDocument *)
 *    <li>Set convertion options
 *    <li>Run convertion.
 *    <li>GetResult to retrieve the CATDocument result.
 *     </ul>  
 * <br>  
 */



class ExportedByCATDECProductToPartCAA CATDECProductToProductConvertor
{

 public:

    virtual ~ CATDECProductToProductConvertor();

   /**
    * Set or unset options. This function must be called before RUN.<br>
    *   @param iOpt 
    *      <ul><li> iOpt = "KeepProductProperties" for keeping Part product properties of reference Part.
    *      <li>iOpt = "KeepSubColors" for keeping sub color elements of reference Part.
    *      <li>iOpt = "KeepAnnotations" for keeping 3D Functional Tolerancing & Annotation elements of reference Part.
    *      <li>iOpt = "KeepPublications" for keeping publication of reference Part.
    *      <li>iOpt = "KeepSelectionSet" for keeping selection set of reference Part.
    *      <li>iOpt = "KeepLayerFilter" for keeping Layer and filter on elements of reference Part.
    *      <li>iOpt = "Keep2DLayout" for keeping 2D Layout element of reference Part.
    *      <li>iOpt = "Suffix=xxxxx" for setting suffix to add to part numbers and display names.
    *      <li>iOpt = "Trace" for log trace
    *      </ul>
    *   @param iMode 
    *      TRUE to set the option on
    *   @return
    *      returns S_OK if done.
    */

   virtual HRESULT SetOption( const CATUnicodeString iOpt, const CATBoolean iMode) = 0;

   /**
    * Convert the product according to the options. This function can be called <b>only one time</b>.<br>
    * This function load the input CATProduct, create a new CATProduct.
    *   @return
    *      returns S_OK if done.
    */
   virtual HRESULT Run() = 0;

  /**
   * Result.<br>
   *   @return
   *      returns result CATProduct.
   */

   virtual CATDocument * GetResult() const = 0;

   /**
   * Error message if run failed.<br>
   *   @return
   *      returns message error.
   */

   virtual CATUnicodeString GetError() const = 0;


};

  /**
   * Constructs a CATDECProductToProductConvertor.
   * <b>This fuction return a null pointer if the licence "Product Data Filtering" (DF1) is not present</b>  
   *   @param iInputCATProduct 
   *      is the product to convert.
   *   
   */
  ExportedByCATDECProductToPartCAA
    CATDECProductToProductConvertor *CATCreateProductToProductConvertor( CATDocument * iInputCATProduct);
 
#endif

