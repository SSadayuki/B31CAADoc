#ifndef CATISamDefineSolution_H
#define CATISamDefineSolution_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// CATISamDefineSolution.h
// Define the CATISamDefineSolution interface
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamDefineSolution ;
#else
extern "C" const IID IID_CATISamDefineSolution ;
#endif
class CATISamAnalysisSet;
/**
 * Interface to Solution Sets .
 * <b>Role:</b> In order to create a solution set inside a new case, this interface allow to defined the 
 * required  input sets that are usefull to define this solution. 
 * <p>
 * These are defined inside the <b>CATSamDefineSet</b> structure:
 * <ul>
 * <li><b>FeatureType</b>  : Feature type of set 
 * <li><b>Optionnal</b>    : Flag to set if set set is mandatory or no.
 * <li><b>TypeInstance</b> : Integer to set the type of reference done with the set.
 * <br><b>Legal values</b> : 0 to create a new set, 1 to reference an existing set, 2 allows both capabilities.
 * </ul>
 */
struct CATSamDefineSet
{
  CATUnicodeString  _FeatureType;
  char              _Optionnal;
  int               _TypeInstance;
};
/**
 * Specify Solution Sets parameters.
 * <b>Role:</b> In order to create a solution set, this interface allow to defined the 
 * required  input sets that are usefull to define this solution. This interface is used by the 
 * <b>CATSamCreateCaseCmd</b> in order to define a command that create new analysis case associated to the solution type.
 * For this, define an header as follow:
 * <dl>
 * <pre>
 * static CATUnicodeString Solution("MyLateTypeSolution");
 * new AniCommandHeader ( "CAAAniInsertCase" , "CATAnalysisModelerUI" , "CATSamCreateCaseCmd"  ,(void *) &Solution);
 *</pre>
 *</dl>
 * <p>
 * It allow also to define automatically if some sensors need to be created with the solution
 * and to create them.
 * @see CATSamDefineSet
*/
//------------------------------------------------------------------
class ExportedByCATAnalysisInterface CATISamDefineSolution: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Retreives the required input set to define a solution.
 * @param oNbDefineSets
 *  The size of the array oDefineSets.
 * @param oDefineSets
 *  The array of input sets parameters.
 * @return HRESULT if E_FAIL and an error is set up, the case will not be created by CATSamCreateCaseCmd commmand and an error window will be displayed.
 */
     virtual HRESULT GetSetsForDefinition(int &oNbDefineSets, CATSamDefineSet * &oDefineSets) = 0;

/**
 * Returns if sensors need to be create or creates them.
 * @param iCreateSensor behavior of the method
 * <br><b>Legal values</b>: 
 * <ul> <li><b>FALSE</b> : Returns the number of sensors. No creation.
 *      <li><b>TRUE</b>  : Create the sensors. </ul>
 * @param iNewSolution The created Solution
 * @return Number of created sensors.
 */ 
     virtual int DefineDefaultSensors(const CATBoolean iCreateSensor, const CATISamAnalysisSet* iNewSolution) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamDefineSolution, CATBaseUnknown );

#endif
