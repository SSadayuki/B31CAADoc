// COPYRIGHT DASSAULT SYSTEMES 2004
//**********************************************************************
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

//===================================================================
//
// CATDECProductToPartConvertor.h
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATDECProductToPartConvertor_H
#define CATDECProductToPartConvertor_H

#include "CATDECProductToPartCAA.h"
#include "CATUnicodeString.h"
class CATDocument;

/**
 * Create a new CATPart from a CATProduct
 * <br> 
 * <b>Role</b>: This service is used to convert a Product into a Part file.
 * <br> 
 * <b>Usage</b>:
 *    <ul><li>Create convertion operator by CATCreateProductToPartConvertor (CATDocument *)
 *    <li>Set convertion options
 *    <li>Run convertion.
 *    <li>GetResult to retrieve the CATDocument result.
 *    </ul>  
 * <br>  
 */

class ExportedByCATDECProductToPartCAA CATDECProductToPartConvertor
{

 public:

    virtual ~ CATDECProductToPartConvertor();

   /**
    * Set or unset options. This function must be called before RUN.<br>
    *   @param iOpt 
    *      <ul><li> iOpt = "MergeAllBodies" for "Merge all bodies of each part in one body"
    *      <li>iOpt = "KeepSubColors" for keeping sub color elements
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
    * This function load the input CATProduct, create a new CATPart and unload the input CATProduct and output CATPart.
    *   @return
    *      returns S_OK if done.
    */
   virtual HRESULT Run() = 0;

   /**
   * Result.<br>
   *   @return
   *      returns result CATPart.
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
   * Constructs a CATDECProductToPartConvertor.
   * <b>This fuction return a null pointer if the licence "Product Data Filtering" (DF1) is not present</b>  
   *   @param iInputDoc 
   *      is the product to convert.
   *   
   */
  ExportedByCATDECProductToPartCAA
    CATDECProductToPartConvertor *CATCreateProductToPartConvertor( CATDocument * iInputCATProduct );
 
#endif

