// COPYRIGHT DASSAULT SYSTEMES 2004
//**********************************************************************
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

//===================================================================
//
// CATDECPartToPartConvertor.h
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATDECPartToPartConvertor_H
#define CATDECPartToPartConvertor_H

#include "CATDECProductToPartCAA.h"
#include "CATUnicodeString.h"
class CATDocument;

/**
 * Create a new CATPart from a CATPart
 * <br> 
 * <b>Role</b>: This service is used to convert a Part into a Part file.
 * <br> 
 * <b>Usage</b>:
 *    <ul><li>Create convertion operator by CATCreatePartToPartConvertor (CATDocument *)
 *    <li>Set convertion options
 *    <li>Run convertion.
 *    <li>GetResult to retrieve the CATDocument result.
 *    </ul>  
 * <br>  
 */



class ExportedByCATDECProductToPartCAA CATDECPartToPartConvertor
{

 public:

    virtual ~ CATDECPartToPartConvertor();

   /**
    * Set or unset options. This function must be called before RUN.<br>
    *   @param iOpt 
    *      <ul><li> iOpt = "KeepProductProperties" for keeping Part product properties
    *      <li>iOpt = "KeepSubColors" for keeping sub color elements
    *      <li>iOpt = "KeepAnnotations" for keeping 3D Functional Tolerancing & Annotation elements
    *      <li>iOpt = "KeepPublications" for keeping publication
    *      <li>iOpt = "KeepSelectionSet" for keeping selection set
    *      <li>iOpt = "KeepLayerFilter" for keeping Layer and filter on elements
    *      <li>iOpt = "Keep2DLayout" for keeping 2D Layout element
    *      <li>iOpt = "Trace" for log trace
    *      </ul>
    *   @param iMode 
    *      TRUE to set the option on
    *   @return
    *      returns S_OK if done.
    */

   virtual HRESULT SetOption( const CATUnicodeString iOpt, const CATBoolean iMode) = 0;

   /**
    * Convert the part according to the options. This function can be called <b>only one time</b>.<br>
    * This function load the input CATPart, create a new CATPart and unload the input CATPart and output CATPart.
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
   * Constructs a CATDECPartToPartConvertor.
   * <b>This fuction return a null pointer if the licence "Product Data Filtering" (DF1) is not present</b>  
   *   @param iInputCATPart 
   *      is the Part to convert
   *   
   */
  ExportedByCATDECProductToPartCAA
    CATDECPartToPartConvertor *CATCreatePartToPartConvertor( CATDocument * iInputCATPart);
 
#endif

