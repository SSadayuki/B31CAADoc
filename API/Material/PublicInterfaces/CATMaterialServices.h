#ifndef CATMaterialServices_h
#define CATMaterialServices_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMaterialCAA2.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"

class CATIMaterialFeature;
class CATIMaterialSupport;
class CATDocument;


/**
 * Applies a material on a given support.
 *
 * @param iMaterial
 *   The material to apply
 * @param iSupport
 *   The support on which the material will be applied.
 * @param iApplyAsLink
 *   The material reference mode.
 *   <br><b>Legal values</b>: 
 *   <dl>
 *     <dt>TRUE
 *     <dd>A link between the support and the material in the catalog document is created. 
 *         No material copy is done.
 *     <dt>FALSE
 *     <dd>The material is copied from the material catalog document into the support document.
 * @return
 *   An integer value. 
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt> 0</dt>
 *     <dd>The material has been successfully applied on the support</dd>
 *     <dt>-1</dt>
 *     <dd>A wrong or missing support argument has been detected</dd>
 *     <dt>-5</dt>
 *     <dd>The material factories are not found</dd>
 *   </dl>
 */

ExportedByCATMaterialCAA2 int ApplyMaterialOnSupport(const CATIMaterialFeature *iMaterial, const CATIMaterialSupport *iSupport, CATBoolean iApplyAsLink = TRUE);


/**
 *  Returns the current material catalog document.
 *  <br><b>Role</b>: This is the document used by the interactive command "Apply Material". 
 *  It will be searched for first with the path defined in 
 *  Tools/Options / Infrastructure/Material Library, and if it not found 
 *  with the path defined using the CATStartupPath environment variable.
 *  <br>
 *  The function checks whether the catalog is not currently opened in session and otherwise 
 *  loads it .
 *  <br>
 *  <b>Note</b>: Do not forget to close the material document using the @href CATDocument#Remove
 *   method at the end of usage.
 *  <br>
 *  <b>Lifecycle rules deviation</b>: This method doesn't AddRef the returned CATDocument pointer.
 * @return
 *   The material catalog document.
 *  <br>
 *   Returned value is NULL if the catalog cannot be found.
 */

ExportedByCATMaterialCAA2 CATDocument*  GetCurrentMaterialCatalog();

/**
 *  Creates a new material in a material catalog document.
 *  <br><b>Role</b>: This method creates a new material and after the creation, the new material
 * should be set in a family using the @href  CATIFamilyFeature#SetMaterial method.
 * @param iName
 *   The name of the material to create.
 * @param iMatDocument
 *   The material catalog document (such document is stored in a file suffixed by CATMaterial) in which the material will be created.
 * @param oMaterial
 *   The material object created. 
 * @return
 *   An integer value. 
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt> 0</dt>
 *     <dd>The material has been successfully created in the catalog</dd>
 *     <dt> 1</dt>
 *     <dd>The material has been successfully created in the catalog but has been renamed to avoid name conflict</dd>
 *     <dt>-1</dt>
 *     <dd>A wrong or missing material name has been detected</dd>
 *     <dt>-2</dt>
 *     <dd>A wrong or missing document argument has been detected</dd>
 *     <dt>-5</dt>
 *     <dd>The material factories are not found</dd>
 *   </dl>
 */

ExportedByCATMaterialCAA2 int CreateNewMaterial(const CATUnicodeString &iName, CATDocument* iMatDocument, CATIMaterialFeature** oMaterial);

#endif
