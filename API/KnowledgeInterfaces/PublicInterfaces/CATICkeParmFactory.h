#ifndef CATICkeParmFactory_H
#define CATICkeParmFactory_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module declaration
#include "KnowledgeItf.h"
#include "CATIVisitor.h"
#include "CATPathElement.h"

// inherited from
#include "CATBaseUnknown.h"

// Forward declaration
#include "CATICkeRelationForwards.h"
class CATIContainer_var;
class CATIList_var;

// interfaces used 
//#include "CATISpecObject.h"
#include "CATICkeMKSUnit.h"
#include "CATICkeMagnitude.h"
#include "CATIParmPublisher.h"
#include "CATIEnumere.h"
#include "CATIType.h"


// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeParmFactory;
#else
extern "C" const IID IID_CATICkeParmFactory;
#endif


/**   
 * Interface dedicated to parameters and relations factory.
 * <b>Role</b>: This interface helps you to create parameters and relations.<br>
 * WATCH OUT : <br>
 * Dont forget to Initialise Literals environnement on the<br> 
 * Literals.feat catalog before any kind of work with parameters<br>
 * This interface is implemented on any Feature containers: thus it creates persistant parameters and relations.<br>
 * It is also implemented on a volatile static object (CATCKEVolatileFactory): thus it creates volatile parameters.<br>
 *   <br>
 *     Usage :<br>
 * //////////////////////////////////////////////////////////////////////////<br>
 *<br>
 *      #include "CATCke.h"<br>
 *
 *      #include "CATICkeUnit.h"<br>
 *      #include "CATICkeMKSUnit.h"<br>
 *      #include "CATICkeMagnitude.h"<br>
 *      #include "CATICkeParmFactory.h"<br>
 *      #include "CATICkeParm.h"<br>
 *
 *      //------------------------------------------------<br>
 *      // Get this factory from your feat container<br>
 *      // to create features (persistent)  <br>
 *      //------------------------------------------------<br>
 *      CATICkeParmFactory_var fact = cont; <br>
 * <br>
 *      //------------------------------------------------<br>
 *      // Or use the Volatile factory<br>
 *      //------------------------------------------------<br>
 *      CATICkeParmFactory_var fact = CATCKEVolatileFactory; <br>
 *     <br>
 *      //------------------------------------------------<br>
 *      // you can create parameters<br>
 *      //------------------------------------------------<br>
 *      CATICkeParm_var p1 = fact->CreateLength ("L",3.3);<br>
 *<br>
 * @see CATICkeMagnitude, CATICkeUnit, CATIEnumere, CATICkeParm, CATICkeRelation
 */


//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATICkeParmFactory : public CATBaseUnknown
{

public:



/**
 * Initialise LiteralFeatures environnement.<br>
 * It finds all startups needed in this container.<br>
 * This method should be used on Literals.feat catalog container.
 */
virtual void InitStartUps () = 0;
  
/**
 * Please do not use it
 * @nodoc
 */
virtual void SetCurrent () = 0;



/**
 * Creates string parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value
 */
virtual CATICkeParm_var CreateString  (const CATUnicodeString &iParameterName,
									   const CATUnicodeString &iParameterValue) = 0;

/**
 * Creates integer parameter.
 * @param iParameterName  parameter name (never changed)
 * @param iParameterValue parameter value
 */
virtual CATICkeParm_var CreateInteger (const CATUnicodeString &iParameterName,
									   const int iParameterValue) = 0;

/**
 * Creates boolean parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value
 */
virtual CATICkeParm_var CreateBoolean (const CATUnicodeString &iParameterName,
									   const CATCke::Boolean iParameterValue) = 0;

/**
 * Creates real parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value
 */
virtual CATICkeParm_var CreateReal    (const CATUnicodeString &iParameterName,
									   const double    iParameterValue) = 0;


/**
 * Creates length parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value in MKS !!! (i.e. meters)
 */
virtual CATICkeParm_var CreateLength  (const CATUnicodeString &iParameterName,
									   const double    iParameterValue) = 0;

									   
/**
 * Creates angle parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value in MKS !!! (i.e. radian)
 */
virtual CATICkeParm_var CreateAngle   (const CATUnicodeString &iParameterName,
									   const double    iParameterValue) =0;

/**
 * @nodoc Do not use it. Use CreateDimension (CATParmDictionary::FindMagnitude("TIME")) instead
 * Creates time parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value in MKS !!! (i.e. second)
 */
virtual CATICkeParm_var CreateTime   (const CATUnicodeString &iParameterName,
									  const double    iParameterValue) =0;

/**
 * @nodoc Do not use it. Use CreateDimension (CATParmDictionary::FindMagnitude("MASS")) instead
 * Creates mass parameter.
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value in MKS !!! (i.e. gram)
 */
virtual CATICkeParm_var CreateMass   (const CATUnicodeString &iParameterName,
									  const double    iParameterValue) =0;

/**
 * Creates dimension parameter.
 * @param iMagnitude parameters type
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value in MKS !!! 
 */
virtual CATICkeParm_var CreateDimension (const CATICkeMagnitude_var &iMagnitude,
                                         const CATUnicodeString &iParameterName,
                                         const double iParameterValue) =0;  // raises InvalidType

/**
 * Creates dimension parameter.
 * @param iMagnitude parameters type
 * @param iParameterName parameter name (never changed)
 * @param iParameterValue parameter value 
 */
virtual CATICkeParm_var CreateDimension (const CATICkeMagnitude_var &iMagnitude,
                                         const CATUnicodeString &iParameterName,
                                         const CATICkeInst_var &iParameterValue) =0; // raises InvalidType, UnrecognisedUnit

/**
 * Creates an enumerated parameter from rank name (1 to n).
 * @param iEnumereType enumerated type 
 * @param iParameterName parameter name
 * @param iParameterRank parameter rank (from 1 to n)
 */
virtual CATICkeParm_var CreateEnumere (const CATIEnumere_var   &iEnumereType,
                                       const CATUnicodeString  &iParameterName,
                                       const int                iParameterRank) = 0; 
/**
 * Creates a literal from its type.
 * @param iParameterType parameter type
 * @param iParameterName parameter name
 */
virtual CATICkeParm_var CreateLiteral (const CATICkeType_var   &iParameterType,
                                       const CATUnicodeString  &iParameterName) = 0;
  


/**
 * Creates a MKS Unit equivalent to a scalar.
 */
virtual CATICkeMKSUnit_var   CreateMKSUnit () = 0;

/**
 * Creates a MKS Unit equivalent to a primitive magnitude.<br>
 * (example m2, s-1).
 * @param iBasicMagnitude primitive magnitude
 * @param iCoeff exponent
 * @return CATICkeMKSUnit_var  MKSUnit created
 */
virtual CATICkeMKSUnit_var   CreateMKSUnit (const CATICkeMKSUnit::Basic iBasicMagnitude,
											const int iCoeff) = 0;

/**
 * Creates a MKS Unit equivalent to a combination of primitive magnitude.<br>
 * (example kgxs-2)
 * @param iMeterCoeff exponent for length
 * @param iKilogramCoeff exponent for mass
 * @param iSecondCoeff exponent for time
 * @param iAmperCoeff exponent for amper
 * @param iTemperatureCoeff exponent for temperature
 * @param iCandelaCoeff exponent for candela
 * @param iMoleNumberCoeff exponent for mole number
 * @param iPriceCoeff exponent for price
 * @param iRadianCoeff exponent for radian
 * @param iSteradianCoeff exponent for steradian
 */
virtual CATICkeMKSUnit_var   CreateMKSUnit (const int iMeterCoeff,
                                            const int iKilogramCoeff,
                                            const int iSecondCoeff,
                                            const int iAmperCoeff,
                                            const int iTemperatureCoeff,
                                            const int iCandelaCoeff,
                                            const int iMoleNumberCoeff,
                                            const int iPriceCoeff,
                                            const int iRadianCoeff,
                                            const int iSteradianCoeff) = 0;
     



/**
 * @nodoc
 */
virtual CATICkeUnit_var      CreateUnit (const CATUnicodeString &name,
                                         const CATUnicodeString &symbol,
                                         const double factor) = 0;

/**
 * @nodoc
 */
virtual CATICkeMagnitude_var CreateMagnitude  (const CATUnicodeString &name,
                                               const CATCkeListOfUnit lu,
                                               const CATICkeMKSUnit_var &mks,
                                               const double epsilon=0) =0;


/**
 * @nodoc 
 * Creates an enumerated type (startup). Watch out. This should be used only to define Catalogs
 * @param iEnumName enum type name
 * @param iValues list of possible values
 */
virtual CATIEnumere_var CreateEnumereType (const CATUnicodeString &iEnumName,
                                           const CATListOfCATUnicodeString &iValues) = 0;
  

/**
 * Creates an enumerated parameter from value.
 * @param iEnumereType enumerated type 
 * @param iParameterName parameter name
 * @param iParameterValue parameter value
 */
virtual CATICkeParm_var CreateEnumere (const CATIEnumere_var &iEnumereType,
                                       const CATUnicodeString          &iParameterName,
                                       const CATUnicodeString          &iParameterValue) = 0; 

 

/**
 * Creates a parm manipulator. This manipulator will not change the persistent parameters range.
 * This method is used to build a manipulator that will block temporarily the user manipulations.
 * In no case this manipulator will change the persistent bounds of the parameter.
 * If you want to persistently change the bounds of the parameter refer to the CATICkeParm interface.
 * <br>
 * Use only on Volatile Factory.
 */
virtual CATIParmManipulator_var  CreateParmManipulator () = 0;

/**
 * Create a formula between parameters (example : y=3*x).<br>
 * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
 * @param iRelationName formula's name
 * @param iComment no more used for formula !!
 * @param iFamily not used !!
 * @param iOutputParameter valuated parameter (y in our example)
 * @param iListOfParameters  (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x in our example)  
 * @param iBody contains the string describing the formula ("3*x" in our example)
 * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method<br> 
 * and so to be able to recognize parameters by their name <br>
 * Not used in realnames = false mode<br>
 * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
 * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
 * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
 *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
 * We advise you strongly to use this second method in your application to avoid NLS problems .  <br>
 * <br>
 * @return Formula created or NULL_var if syntax error<br>
 */
virtual CATICkeRelation_var CreateFormula (const CATUnicodeString    &iRelationName,
					     const CATUnicodeString    &iComment,
					     const CATUnicodeString    &iFamily,
					     const CATICkeParm_var     &iOutputParameter,
					     const CATCkeListOfParm     iListOfParameters,
					     const CATUnicodeString    &iBody,
					     const CATIParmPublisher_var &iRoot = NULL_var,
					     const CATCke::Boolean     &iRealnames = 1) = 0;

/**
 * Create a rule between parameters (example : if (x> 3) y=3*x else y = 2).<br>
 * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
 * @param iRelationName  program's name
 * @param iComment comment  !!
 * @param iFamily not used !!
 * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs or outputs (x and y  in our example)  
 * @param iBody contains the string describing the program ("if (x> 3) y=3*x else y = 2" in our example)
 * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method <br>
 * and so to be able to recognize parameters by their name<br>
 * Not used in realnames = false mode<br>
 * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
 * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
 * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
 *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
 * We advise you strongly to use this second method in your application to avoid NLS problems .  
 * <br> 
 * @return Rule created or NULL_var if syntax error
 */
virtual CATICkeRelation_var CreateProgram (const CATUnicodeString    &iRelationName,
					     const CATUnicodeString    &iComment,
					     const CATUnicodeString    &iFamily,
					     const CATCkeListOfParm     iListOfParameters,
					     const CATUnicodeString    &iBody,
					     const CATIParmPublisher_var &iRoot = NULL_var,
					     const CATCke::Boolean     &iRealnames = 1) = 0;

/**
 * Create a check between parameters (example : x > 3).<br>
 * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
 * @param iRelationName program's name
 * @param iComment comment
 * @param iFamily not used !!
 * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x and y  in our example)  
 * @param iBody contains the string describing the check ("x> 3" in our example)
 * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method<br> 
 * and so to be able to recognize parameters by their name<br>
 * Not used in realnames = false mode<br>
 * @param iRealnames  = 2 possibilities to name a parameter in the body. <br>
 * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
 * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
 *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
 * We advise you strongly to use this second method in your application to avoid NLS problems .  
 * <br>
 * @return check created or NULL_var if syntax error
 */
virtual CATICkeRelation_var CreateCheck   (const CATUnicodeString     &iRelationName,
					     const CATUnicodeString     &iComment,
					     const CATUnicodeString     &iFamily,
					     const CATCkeListOfParm    iListOfParameters,
					     const CATUnicodeString     &iBody,
					     const CATIParmPublisher_var &iRoot = NULL_var,
					     const CATCke::Boolean    &iRealnames = 1) = 0;

/**
 * @nodoc
 * Create a simple relation between 2 parameters 'y = ax+b'.
 * with x is first parameter, y is second one. This relation is synchronous <br>
 * 
 * @param iRelationName  relations name
 * @param iComment comment
 * @param iFamily not used !!
 * @param iX input literal
 * @param iY output literal
 * @param iA a
 * @param iB b
 * @return relation created
 */
virtual CATICkeRelation_var CreateSymetricalRelation (const CATUnicodeString &iRelationName,
							const CATUnicodeString &iComment,
							const CATUnicodeString &iFamily,
							const CATICkeParm_var &iX,
							const CATICkeParm_var &iY,
							const double iA,
							const double iB) = 0;

/**
 * Creates a fully functional design table (with its embedded sheet) from a file (excel or text file).<br>
 * @Returns an handler on the new design table. if a problem occurs while creating it (bad file format), returns NULL_var 
 * @param iRelationName The name of the design table
 * @param iComment The comment associated to the design table
 * @param iFilePath
 *	The path of the sheet file.
 *	- If param sheetWithoutFile = 0 :
 *			if this path contains ".xls", the Excel format is assumed, else the tabulated text format is used.
 *			If this path is empty, no sheet is aggregated to the design table, and the user has to create a sheet 
 *			(method CreateSheet) and associate it to an excel or text file)
 *	- If param sheetWithoutFile = 1 :
 *			no matter with the content of this path
 * @param orientation
 *  1 if vertical, 0 else (used only if path != "" and sheetWithoutFile = 0)
 * @param sheetWithoutFile
 *	If sheetWithoutFile = 1, a model sheet is created (sheet with persitent memory storage, but no file)
 *	and it won't be possible to associate a file to this sheet.
*/
   virtual CATIDesignTable_var CreateDesignTable(const CATUnicodeString     &iRelationName,
	   const CATUnicodeString &iComment,
	   const CATUnicodeString &iFilePath,
	   int orientation = 1,
	   int sheetWithoutFile = 0 ) = 0;


/**
 * Create a design table sheet. 
 * @param iFilePath The path of the source file. It can be an Excel or a Lotus sheet
 * or a tabulated text file, or an empty path (if iType != 4, you'll have to call 
 * CreateSourceFile on CATICkeSheet interface).
 * If the path isn't empty and the type is different from 4, and the file doesn't exist,
 * the file is created.
 * @param iType
 * - if iType = 4, whatever the content of the path, a model sheet 
 *   is created (sheet with persitent memory storage, but no file) 
 * - if path is empty, uses the type to know what kind of sheet has to be created
 *   <br><b>Legal values</b>: the test can be either
 *   <tt>1</tt> Excel one.
 *   <tt>2</tt> Text one
 *   <tt>3</tt> Lotus one
 *   <tt>4</tt> Model one
 * @return
 * the created sheet. It returns NULL_var if the file creation failed (in the case where the file has to be created) or if Excel or Lotus is asked on UNIX
 */
virtual CATICkeSheet_var CreateSheet(const CATUnicodeString &iFilePath,int iType = 0) = 0;


/**
 * Creates feature reference.<br>
 * A feature reference is a way to see a feature as a parameter,<br>
 * Such a feature reference can only be used in input of Knowledgeware relations.<br>
 * @param iFeature feature to be referenced : should implement CATICkeFeature.
 * @return CATICkeParm_var feature reference created
 */
virtual CATICkeParm_var CreateObjectReference  (const CATBaseUnknown_var &iFeature) = 0;




/**
 * Initialise Literals Catalog and wakes up all relations.<br>
 * Should be done when creating a new container or loading it.<br>
 * This method replaces InitStartups. It loads the Literals.feat catalog and does InitStartups on it.<br>
 * This should be used on the feature container where relations have been stored.<br>
 */
    virtual void InitAndWakeUp () = 0;
  

/**
 * @nodoc
 */
	virtual CATICkeParm_var CreateObjectReference  (const CATICkeType_var &t,const CATUnicodeString &name ) = 0;

/**
 * @nodoc
 */
	virtual CATICkeParm_var CreateRelativeParameter(const CATUnicodeString& iRelativePath) = 0;

/**
 * @nodoc
 * Creates an imported parameter. These parameter are created when pasting as 
 * result with link, when creating a formula in context, or between parameters 
 * of different documents.
 */
	virtual CATICkeParm_var CreateImportedParameter(const CATICkeParm_var& iReference, int withLink = 1, int refref = 0) = 0;



/**
 * Creates a literal from another by copying its value.
 * Note that at the end, the parameter is not aggregated.
 * One option is to copy the existing formula that valuates the literal if any,<br>
 * The formula is also not aggregated. It will reference the same input parameters as the original formula.
 * @param iParameterToCopy parameter to copy
 * @param iWithFormula indicates if we wish to copy the formula (note that the formula copied won't be agregated to anything).
 * <br><b>Legal values</b>: 
 * <tt>0</tt> No copy of the formula.
 * <tt>1</tt> Copy of the formula.
 * @return CATICkeParm_var : literal copied
 */
virtual CATICkeParm_var Copy (const CATICkeParm_var     &iParameterToCopy,
					          const CATCke::Boolean     &iWithFormula = 0) = 0 ;


/**
 * Creates a relation from another by copying it.
 * Works on formula only
 * Note that second relation will reference the same parameters, so il will be deactivated.
 * The copied relation is not aggregated.
 * @param iRelationToCopy parameter to copy
 * @return CATICkeRelation_var relation copied
 */
virtual CATICkeRelation_var Copy (const CATICkeRelation_var     &iRelationToCopy) = 0 ;


/**
 * Create an optimization constraint (example : x + y > 3).
 * 
 * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
 * 
 * @param iRelationName program's name
 * @param iComment comment
 * @param iFamily not used !!
 * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x and y  in our example)
 * @param iBody contains the string describing the constraint ("x> 3" in our example)
 * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method 
 * and so to be able to recognize parameters by their name <br>
 * Not used in realnames = false mode
 * @param iRealnames 2 possibilities to name a parameter in the body. <br>
 * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
 * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
 *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
 * We advise you strongly to use this second method in your application to avoid NLS problems .  
 * 
 * @return = constraint created or NULL_var if syntax error
 */
virtual CATICkeRelation_var CreateOptimizationConstraint   (const CATUnicodeString     &iRelationName,
										        const CATUnicodeString     &iComment,
												double iPrecision,
												int iPriority,
					                            const CATCkeListOfParm    iListOfParameters,
					                            const CATUnicodeString     &iBody,
					                            const CATIParmPublisher_var &iRoot = NULL_var,
					                            const CATCke::Boolean    &iRealnames = 1) = 0;

/**
 * Create a law between parameters and formal parameters (example : y = sin(x) + Real.1).<br>
 * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
 * @param iRelationName  program's name
 * @param iComment comment  !!
 * @param iFamily not used !!
 * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs or outputs (Real.1 in our example)  
 * @param iListOfFormalParameters (pointer on list of CATBaseUnknown_var) contains formal literal used in inputs or outputs (x and y  in our example)  
 * @param iBody contains the string describing the program ("y = sin(x) + Real.1" in our example)
 * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method <br>
 * and so to be able to recognize parameters by their name<br>
 * Not used in realnames = false mode<br>
 * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
 * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
 * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
 *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
 * We advise you strongly to use this second method in your application to avoid NLS problems .  
 * <br> 
 * @return Rule created or NULL_var if syntax error
 */
virtual CATICkeRelation_var CreateLaw (const CATUnicodeString    &iRelationName,
					     const CATUnicodeString    &iComment,
					     const CATUnicodeString    &iFamily,
					     const CATCkeListOfParm     iListOfParameters,
					     const CATCkeListOfParm     iListOfFormalParameters,
					     const CATUnicodeString    &iBody,
					     const CATIParmPublisher_var &iRoot = NULL_var,
					     const CATCke::Boolean     &iRealnames = 1) = 0;


/**
* @nodoc
*/
virtual void InitFactory() = 0;


/**
 * @nodoc
 */
virtual CATICkeParm_var CreateTechnicalParameter  (const CATICkeType_var &t,const CATUnicodeString &name ,const CATUnicodeString & iTechnicalPath, const CATICkeParm_var& iFinalParameter) = 0;
/**
 * @nodoc
 */
virtual CATISpecObject_var CreateDeletedFeature  (const CATIType_var &t,const CATUnicodeString &name ) = 0;

/**
 * Creates a List object.<br>
 * @param iName name of the list.
 */
virtual CATIList_var   CreateList (const CATUnicodeString &iName) = 0;
     
/**
* Creates a standard visitor to perform visit via CATIParmPublisher::VisitChildren.<br> 
* When calling CATIParmPublisher::VisitChildren with this visitor, it <br>
* adds visited instances in the list if they implement the interface which clsid is iVisitclsid
*
*   For example:
*
* In order to retrieve the parameters use CATICkeParm as interface identifier.
* To retrieve the instances use CATIInstance as interface identifier. 
* 
* @param iVisitclsid the interface identifier.
* @param ioListToFill the list to be filled by the visitor.
*
* CAUTION: the returned visitor must be deleted before the list you give in input, because it keeps
* a reference to the list.
*
*/
virtual CATIVisitor_var CreateStandardVisitor(const GUID& iVisitclsid, const CATLISTV(CATBaseUnknown_var) *ioListToFill) = 0;

	/**
 * @nodoc
 * Creates an imported parameter. These parameter are created when pasting as 
 * result with link, when creating a formula in context, or between parameters 
 * of different documents.
 */
	virtual CATICkeParm_var CreateImport(CATPathElement* selected_element, CATPathElement* object_in_work = NULL) = 0 ; 

private :  

  // 2 define ClassName
  CATDeclareInterface;

};


CATDeclareHandler(CATICkeParmFactory,CATBaseUnknown);


#endif

