// COPYRIGHT Dassault Systemes 2008
/**
/**
 * @CAA2Level L1
 * @CAA2Usage U1
*/

//===================================================================
//
// CATMmrImportComparator.h
//
//===================================================================
//
// Usage notes:
// This class allow the user to easily get 
// the differences between two Imports.
//
//===================================================================
#ifndef CATMmrImportComparator_H
#define CATMmrImportComparator_H

#include "CATMechanicalModeler.h"

//-----------------------------------------------------------------------
#include "CATBaseUnknown.h"
#include "CATLISTV_CATIBRepAccess.h"

class CATMmrComparatorObj;
class CATIMechanicalFeature_var;
class CATIBRepAccess_var;

//-----------------------------------------------------------------------


 /**
 * Class to analyse differences between two mechanical Import. 
 * <br><b>Role</b>: 
 * This class offers services for retrieving the missing or differently Named Elements between two Inter Part Import Features. 
 * One of this import feature is called <tt>“Main Feature”</tt> and the other <tt>“Feature to Compare”</tt>.
 * <p> A Named Element (see Generic Naming Overview for more details ) is a Face for volumes, a Face or Border Edge for surfaces,
 * an Edge or a Border Vertex for wires.
 * Some Elements may have a geometry which look the same but not have the same naming because they are constructed differently.
 * The naming of an element may be kept even when there is a change of connectivity.
 * Elements on an import feature have their own naming, but to be able to synchronize them
 * ( and keep the stability ) Imports also keep the naming of Elements referenced in the import.</p>
 * So when you compare two import features :<ul>
 * <li>Some Named Elements of the <tt>“Main Feature”</tt> may be missing in the <tt>“Feature to Compare”.</tt></li>
 * <li>Some Named Elements can have the same import naming but a different reference naming (and usually a different geometry).</li>
 * <li>Some Named Elements may have the same naming (import and reference naming) but a change of conectivity.</li></ul>
 *
 * <br><b>Usage</b>:<ul>
 * <li>You first need to define the import feature to compare with the methods 
 * @href #SetMainFeature and @href #SetFeatureToCompare,</li>
 * <li>You need to chose the mode of comparison @href #CATMmrComparatorMode with the method
 * @href #SetMode,</li>
 * <li>You run the operator by using the method @href #Run,</li>
 * <li>You get the result by using one of the methods as @href #GetMissingElements.</li>
 *</ul>
 * <br><b>Notes</b>:<ul>
 * <li>You can change at any time the <tt>“Main Feature”</tt> or the <tt>“Feature to Compare”.</tt> <b>but</b>
 * the method @href #Run need to be called before any <tt>Get methods</tt>.</li>
 * <li>You also can change the mode at any time <b>but</b>
 * the method @href #Run need to be called after,
 * and some <tt>Get methods</tt> may be invalid if the mode is not set on the good level.</li>
 *</ul>
 */
class ExportedByCATMechanicalModeler CATMmrImportComparator: public CATBaseUnknown
{
  CATDeclareClass;

  public:

    /** 
    * The comparison mode between two features.
    * <br><b>Role:</b> The comparison mode between the <tt>"Main Feature"</tt> and <tt>"Feature to Compare"</tt>.
    * @param Missing
    * Allows the computation of only the Named Elements of the <tt>"Main Feature"</tt> which 
    * are missing in the <tt>"Feature to Compare"</tt>.
    * @param ModifiedReferenceNaming
    * Allows the computation off the Missing Elements and off the Modified by Reference Naming Element
    * ( the Naming of the Import is the same but the Naming of the reference are different).
    * @param ModifiedConnectivity
    * Allows the computation off the Missing Elements, Modified by Reference Naming Element
    * and of Elements with the same naming but a diferent connectivity.
    */
    enum CATMmrComparatorMode {
      Missing = 0, 
      ModifiedReferenceNaming = 1, 
      ModifiedConnectivity = 2 };

      /**
      * Constructor.
      * <br><b>Role:</b> Construct the class of comparison.
      */
      CATMmrImportComparator ();
      /**
      * Destructor.
      * <br><b>Role:</b> Destruct the class of comparison.
      */
      virtual ~CATMmrImportComparator ();

  // ------------------------------------------------------------------------------------------------------------------------

 /**
 * This method initializes the Class with the "Main Feature".
 * <br><b>Role:</b> 
 * This method initializes the Class with the <tt>"Main Feature"</tt>.
 * You can change the <tt>"Main Feature"</tt> anytime you want <b>but</b> the #Run method must be called after.
 * @param iMainFeature
 * Main Feature Import.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the feature is not an import feature,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
     HRESULT SetMainFeature ( const CATIMechanicalFeature_var & iMainFeature );

 /**
 * This method initializes the Class with the "Feature to Compare".
 * <br><b>Role:</b>
 * This method initializes the Class with the <tt>"Feature to Compare"</tt>.
 * You can change the <tt>"Feature to Compare"</tt> anytime you want <b>but</b> the #Run method must be called after.
 * @param iFeatureToCompare
 * Feature to Compare.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the feature is not an import feature,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
     HRESULT SetFeatureToCompare ( const CATIMechanicalFeature_var & iFeatureToCompare );

 /**
 * This method sets the comparison mode.
 * <br><b>Role:</b>
 * This method sets the comparison mode between the Main Feature and the Feature To Compare.
 * If not used the mode is set to Missing.
 * You can change the mode anytime you want <b>but</b> the #Run method must be called after.
 * With some value of the mode some <tt>Get methods</tt> are invalid.
 * @param iMode
 * This mode allow the computation of more or less complex Comparison see @href #CATMmrComparatorMode.
 * By default this mode is set to Missing.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
     HRESULT SetMode ( CATMmrImportComparator::CATMmrComparatorMode iMode );

  // ----------------------------------------------------------------------------------------------

 /**
 * This method performs the comparison.
 * <br><b>Role:</b>
 * This method performs the Comparison between the Features Main and To Compare.
 * <br><b>Precondition:</b>
 * methods @href #Set_MainFeature and @href #SetFeatureToCompare need to be called first.
 * Evrery time a <b>Set methods</b> is used you need to run this method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_FAIL</tt>: the methods @href #SetMainFeature or @href #SetFeatureToCompare have not been called,
 *   or the features are not import features,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
     HRESULT Run ( );
 
  // ----------------------------------------------------------------------------------------------

 /**
 * This method gets the Elements from the "Main Feature" Missing in the "Feature to Compare".
 * <br><b>Role:</b>
 * This method gets the Elements from the <tt>"Main Feature"</tt> Missing in the <tt>"Feature to Compare"</tt>.
 * <br><b>Precondition:</b>
 * method @href #Run need to be called first.
 * @param oLMissingElements
 * List of Elements from the <tt>"Main Feature"</tt> Missing in the <tt>"Feature to Compare"</tt>,
 * this output list is emptied at each start of the method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the method @href #Run had not been called,
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
     HRESULT GetMissingElements ( CATLISTV(CATIBRepAccess_var) & oLMissingElements );

 /**
 * This method gets the Elements of the "Main Feature" with same naming in the Import but different naming in the Reference.
 * <br><b>Role:</b>
 * This method gets the Elements off the <tt>"Main Feature"</tt> with same naming in the Import but different naming in the Reference.
 * <br><b>Precondition:</b>
 * method @href #Run need to be called first and the
 * method @href #SetMode with ModifiedReferenceNaming or ModifiedConnectivity.
 * @param oLModifiedElementsInMain
 * List of Elements from the <tt>"Main Feature"</tt> modified in the <tt>"Feature to Compare"</tt>,
 * this output list is emptied at each start of the method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the method @href #Run had not been called or the @href #CATMmrComparatorMode is set to Missing,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
  HRESULT GetModifiedReferenceNamingElementsInMain ( CATLISTV(CATIBRepAccess_var) & oLModifiedElementsInMain );

  /**
 * This method gets the Elements of the "Feature to Compare" with same naming in the Import but different naming in the Reference.
 * <br><b>Role:</b>
 * This method gets the Elements of the <tt>"Feature to Compare"</tt> with same naming in the Import but different naming in the Reference.
 * <br><b>Precondition:</b>
 * method @href #SetMode with ModifiedReferenceNaming or ModifiedConnectivity.
 * @param oLModifiedElementsInCompared
 * List of Elements from the <tt>"Feature to Compare"</tt> modified in the <tt>"Main Feature"</tt>,
 * this output list is emptied at each start of the method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the method @href #Run had not been called or the @href #CATMmrComparatorMode is set to Missing,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
  HRESULT GetModifiedReferenceNamingElementsInToCompare ( CATLISTV(CATIBRepAccess_var) & oLModifiedElementsInToCompare );

 /**
 * This method gets the Elements of the "Main Feature" with same naming but a change of connectivity.
 * <br><b>Role:</b>
 * This method gets the Elements of the <tt>"Main Feature"</tt> with same naming but a change of connectivity.
 * <br><b>Precondition:</b>
 * method @href #SetMode with ModifiedConnectivity.
 * @param oLModifiedElementsInMain
 * List of Elements from the Main Feature modified in the Compared Features,
 * this output list is emptied at each start of the method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the method @href #Run had not been called or the @href #CATMmrComparatorMode is not set to ModifiedConnectivity,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
  HRESULT GetModifiedConnectivityElementsInMain ( CATLISTV(CATIBRepAccess_var) & oLModifiedElementsInMain );

 /**
 * This method gets the Elements of the "Feature to Compare" with same naming but a change of connectivity.
 * <br><b>Role:</b>
 * This method gets the Elements of the <tt>"Feature to Compare"</tt> with same naming but a change of connectivity.
 * <br><b>Precondition:</b>
 * method @href #Set_Mode with MmrModifiedConnectivity.
 * @param oLModifiedElementsInToCompare
 * List of Elements from the To Compared Feature modified in the Compared Features,
 * this output list is emptied at each start of the method.
 * @return
 *   The error code.
 *   <br><b>Legal values</b>: <ul>
 *   <li><tt>S_OK</tt>: all is correct,</li>
 *   <li><tt>E_INVALIDARG</tt>: the method @href #Run had not been called or the @href #CATMmrComparatorMode is not set to ModifiedConnectivity,</li>
 *   <li><tt>E_FAIL</tt>: Error occured.</li></ul>
 */
  HRESULT GetModifiedConnectivityElementsInToCompare ( CATLISTV(CATIBRepAccess_var) & oLModifiedElementsInToCompare );

  // ----------------------------------------------------------------------------------------------

  // Copy constructor and equal operator
  // -----------------------------------
  private:

    inline CATMmrImportComparator (CATMmrImportComparator &);
    inline CATMmrImportComparator& operator=(CATMmrImportComparator&);
    

  // Private datas
  // -------------
    CATMmrComparatorObj * _CIObj;

  // -------------

};

#endif
