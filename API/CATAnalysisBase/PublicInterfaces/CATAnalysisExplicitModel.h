// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitModel
//
//=============================================================================
//
// Usage Notes: General services linked to the field model and the database of rules.
//
//=============================================================================
// Octobre 99   Creation                                                    
//=============================================================================


#ifndef CATAnalysisExplicitModel_H_
#define CATAnalysisExplicitModel_H_

#include "CATSAM0Explicit.h"

#include "CATAnalysisExplicitTypes.h"
#include "CATListOfCATUnicodeString.h"
#include "CATIMSHMeshManager.h"

class CATAnalysisExplicitRulesData ;
class CATAnalysisExplicitTopology ;
class CATAnalysisExplicitListUsr ;
class CATAnalysisExplicitListATo ;
class CATAnalysisExplicitListABy ;
class CATAnalysisAssemblyManager;
class CATAnalysisExplicitSearch ;
class CATAnalysisExplicitEntity ;
class CATAnalysisExplicitParent ;
class CATAnalysisExplicitCharac ;
class CATAnalysisExplicitChild ;
class CATESamExplicitContainer ;
class CATAnalysisExplicitAxis ;
class CATAnalysisExplicitData ;
class CATAnalysisExplicitList ;
class CATAnalysisExplicitSet ;
struct CATSamExplicitTag ;

class CATIContainer ;
class CATMSHElement ;
class CATStreamArea ;
class CATSamStream;
class CATDocument ;
class CATMSHNode ;

class CATSamModelFieldModel;
class CATAnalysisExplicitModelHandler;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field Model management.
 * This object provides the framework which enables a field model to be created
 * and manipulated in memory.<br>
 * No field model data may exist without a <b>CATAnalysisExplicitModel</b> object.
 * In particular when this object is de-allocated, all the field model information
 * associated to the object is cleared from memory.<br>
 * It also provides access to the database of rules.
 */

class ExportedByCATSAM0Explicit CATAnalysisExplicitModel
{
  public :
/**
 * @deprecated V5R17
 * Contructor.
 * @param iFileName
 *    The file name of the database of rules.<br>
 *    If no path is specified, this file is searched in directories
 *    set by the <b>CATReffilesPath</b> environment variable.
 */
    CATAnalysisExplicitModel(const char *iFileName) ;

/**
 * Destructor.
 */
    virtual ~CATAnalysisExplicitModel() ;

/**
 * @deprecated V5R17
 * Copy constructor.<br>
 * The new field model will use the same database of rules as the parameter field model but no other
 * information is copied between the models.
 */
    CATAnalysisExplicitModel(const CATAnalysisExplicitModel &iModel) ;

/**
 * Assignment operator.<br>
 * The current model is first totally emptied of all data.<br>
 * The current field model will use the same database of rules as the parameter field model but no other
 * information is copied between the models.
 */
    CATAnalysisExplicitModel &operator = (const CATAnalysisExplicitModel &iModel) ;

/**
 * Retrieves a pointer to the field model corresponding to a document.
 * @param iDocument
 *    A pointer to the document.
 * @see CATDocument
 */
    static CATAnalysisExplicitModel * GetDocumentModel(CATDocument *iDocument) ;

/**
 * Retrieves a pointer to the current database of rules.
 */
    const CATAnalysisExplicitRulesData * GetRulesData() const ;

/**
 * Returns the instance of the <b>CATAnalysisExplicitTopology</b> object based on the FEM Model.
 * An AddRef() is done on the topology before returning the pointer. 
 * <font color="red">You have to release the pointer after use.</font>
 * @param oTopology  [out , CATBaseUnknown#Release]
 * A pointer to the CATAnalysisExplicitTopology.
 * @see CATAnalysisExplicitTopology
 */
    HRESULT GetTopology(const CATAnalysisExplicitTopology* &oTopology) const ;

/**
 * Retrieves a pointer to the mesh manager to which the field model is linked to.<br>
 * An AddRef()is done on the mesh manager before returning the pointer.
 * <font color="red">You have to release the pointer after use.</font>
 * @return CATBaseUnknown
 * @see CATIMSHMeshManager
 */
    CATIMSHMeshManager * GetMeshManager() const ;

/**
 * Retrieves the first <b>ANALYSIS</b> set of the field model.
 * @param oAnalysisSet
 *    A reference to the <b>ANALYSIS</b> set if one exists.
 * @see CATAnalysisExplicitSet
 */
    HRESULT GetAnalysisSet(CATAnalysisExplicitSet &oAnalysisSet) const ;

/**
 * Retrieves the first <b>ANALYSIS_MODEL</b> set under the first <b>ANALYSIS</b> set of the field model.
 * @param oFemModelSet
 *    A reference to the <b>ANALYSIS_MODEL</b> set if one exists.
 * @see CATAnalysisExplicitSet
 */
    HRESULT GetFemModelSet(CATAnalysisExplicitSet &oFemModelSet) const ;
  
/**
 * Returns an explicit set of the given physical type using a reference set or entity.<br>
 * If the reference is an entity, then its first parent becomes the reference set.<br>
 * The search always begins by the children of the reference set. If it fails,
 * the first parent of the reference set is taken and the search continues with
 * its children. Similarly if the set is not found in the children list the same process
 * is applied and stop when the set is found or when the reference reaches the parent <b>ANALYSIS_MODEL</b>,
 * @param iPhysicalType
 *    The physical type of the set which is being asked for.<br>
 *    <b>iPhysicalType</b> can be <b>ANALYSIS</b> or <b>ANALYSIS_MODEL</b> in which
 *    case the search only uses the parent lists.
 * @param iReference
 *    The reference set or entity from which the search will begin.<br>
 *    If NULL_exp is provided, then the reference set will be the first <b>ANALYSIS</b>
 *    set of the model.
 * @param oSet
 *    The set if found, NULL_exp if not.
 * @see CATAnalysisExplicitParent, CATAnalysisExplicitSet
 */
    HRESULT GetSet(CATSamPhysicalType               iPhysicalType,
                   const CATAnalysisExplicitParent  &iReference,
                   CATAnalysisExplicitSet           &oSet) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetNbNodes instead.
 * Returns the number of nodes of a context.
 * @param iContext
 *    A reference to the context.
 * @param oNbNodes
 *    The number of nodes.
 * @see CATAnalysisExplicitParent
 */
    HRESULT GetNbNodes(const CATAnalysisExplicitParent &iContext, int &oNbNodes) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetNbElements instead.
 * Returns the number of elements of a context.
 * @param iContext
 *    A reference to the context.
 * @param oNbElements
 *    The number of elements.
 * @see CATAnalysisExplicitParent
 */
    HRESULT GetNbElements(const CATAnalysisExplicitParent &iContext, int &oNbElements) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetNbVirtualNodes instead.
 * Returns the number of Virtual nodes of a context.
 * @param iContext
 *    A reference to the context.
 * @param oNbNodes
 *    The number of Virtual nodes.
 * @see CATAnalysisExplicitParent
 */
    HRESULT GetNbVirtualNodes(const CATAnalysisExplicitParent &iContext, int &oNbVirtualNodes) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetNbVirtualElements instead.
 * Returns the number of Virtual elements of a context.
 * @param iContext
 *    A reference to the context.
 * @param oNbElements
 *    The number of Virtual elements.
 * @see CATAnalysisExplicitParent
 */
    HRESULT GetNbVirtualElements(const CATAnalysisExplicitParent &iContext, int &oNbVirtualElements) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetNodes instead.
 * Returns the list of mesh node pointers of a context.
 * @param iContext
 *    A reference to the context.
 * @param oNodes
 *    A pointer to the list of mesh node pointers.<br>
 *    This parameter must be equal to NULL when this method is called.<br>
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATAnalysisExplicitParent, CATMSHNode
 */
    HRESULT GetNodes(const CATAnalysisExplicitParent &iContext, CATMSHNode **(&oNodes)) const ;

/**
 * @deprecated V5R17
 *    Use @href CATAnalysisExplicitTopology#GetElements instead.
 * Returns the list of mesh element pointers of a context.
 * @param iContext
 *    A reference to the context.
 * @param oElements
 *    A pointer to the list of mesh element pointers.<br>
 *    This parameter must be equal to NULL when this method is called.<br>
 *    The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATAnalysisExplicitParent, CATMSHElement
 */
    HRESULT GetElements(const CATAnalysisExplicitParent &iContext, CATMSHElement **(&oElements)) const ;

/**
 * @deprecated V5R17
 *    Should not be used.
 * Deletes objects in the field model based on their data type.
 * @param iDataType
 *    The data type which must be deleted.<br>
 *    If equal to <b>CATSamDataTypeLast</b>, then all objects of the field model are deleted.
 * @see CATSamDataType
 */
    HRESULT Delete(CATSamDataType iDataType = CATSamDataTypeLast) const ;

/**
 * Deletes objects in the field model based on their physical type.
 * @param iPhysicalType
 *    The physical type which must be deleted.
 */
    HRESULT Delete(CATSamPhysicalType iPhysicalType) const ;

/**
 * @deprecated V5R17
 *    Should not be used.
 * Enables or disables the display of errors.
 * Retrieves the current display status.<br>
 * @param iDisplay
 *    If TRUE, then errors are displayed.
 */ 
    static CATBoolean DisplayErrors(CATBoolean iDisplay = TRUE) ;

/**
 * @deprecated V5R17
 *    Should not be used.
 * Resets the treatment of errors.
 */
    static void ResetErrors() ;

/**
 * Dumps some statistics about the field model.
 */
    void DumpStatistics() const ;

/**
 * Dumps some statistics about the field model.
 * @param oListOfString
 *    The List of CATUnicodeString.
 */
    void DumpStatistics(CATListValCATUnicodeString* oListOfString) const;

/**
 * Returns the last tag number used during the creation of an object in the field model.
 * @param oTag The last tag number.
 */
    void GetLastTag(int &oTag) const;

/**
 * Informs if the Undo mode is activated.
 */
    CATBoolean IsUndoMode() const ;

/**
 * Get the instance of the entity representing the global referential frame.
 * @param ioGlobalRefFrame
 *    the instance of the entity representing the global referential frame.
 *    ** WARNING ** : This instance must never be deleted.
 */
    HRESULT GetGlobalRefFrame(CATAnalysisExplicitAxis &ioGlobalRefFrame) const ;

/**
 * Check if an Entity is equal to the instance of the entity representing the global referential frame.
 * @param iGlobalRefFrame
 *    the instance of the entity to check.
 */
    CATBoolean IsGlobalRefFrame(const CATAnalysisExplicitParent &iGlobalRefFrame) const ;

/**
 * Retrieves a pointer to the CATAnalysisAssemblyManager instance.<br>
 * @param oAssemblyManager.<br>
 *    The CATAnalysisAssemblyManager instance.
 * An AddRef() is done on the CATAnalysisAssemblyManager before returning the pointer.
 * @see CATAnalysisAssemblyManager
 */
    HRESULT GetAssemblyManager(const CATAnalysisAssemblyManager* &oAssemblyManager) const;

/**
 * Retrieves a pointer to the explicit container to which Topology is linked to.<br>
 * @param oExplicitContainer
 *     The Explicit container to which Topology is linked to.
 *     An AddRef() is done on the Explicit container before returning the pointer.
 * @see CATIContainer
 */
    HRESULT GetExplicitContainer(const CATIContainer* &oExplicitContainer) const;

/**
 * Returns the Field Model tag number.
 */
    int GetModelTag() const;

  private :
    // Friend Class Private Methods
    friend class CATSamModelFieldModel ;
    friend class CATAnalysisExplicitSet ;
    friend class CATSamModelListServices ;
    friend class CATSamModelListIterator ;
    friend class CATAnalysisExplicitList ;
    friend class CATAnalysisExplicitData ;
    friend class CATAnalysisExplicitChild ;
    friend class CATESamExplicitContainer ;
    friend class CATSamModelMemoryServices ; 
    friend class CATAnalysisExplicitParent ;
    friend class CATAnalysisExplicitCharac ;
    friend class CATAnalysisExplicitEntity ;
    friend class CATAnalysisExplicitSearch ;
    friend class CATAnalysisExplicitListUsr ;
    friend class CATAnalysisExplicitListATo ;
    friend class CATAnalysisExplicitListABy ;
    friend class CATAnalysisExplicitServices; 
    friend class CATAnalysisExplicitTopologyUnit ;
    friend class CATAnalysisExplicitModelHandler ;

    // Default constructor.
    CATAnalysisExplicitModel() ;
    // Returns the last tag number used during the creation of an object in the field model.
    void GetLastTag(CATSamExplicitTag &oTag) const;
    // Attributes a sequential number to all the entities of an analysis model.
    // @param iAnalysisModel : An analysis model (with "ANALYSIS_MODEL" type).
    HRESULT RenumberModel(const CATAnalysisExplicitSet &iAnalysisModel) const ;
    // Establishes a link between a field model and a mesh manager.<br>
    // An AddRef() is done on the mesh manager.
    // @param iMeshManager : A pointer to the mesh manager.

	HRESULT LinkToMeshManager(CATIMSHMeshManager *iMeshManager, CATBoolean iRenumberModel = TRUE) ;

    HRESULT LinkToMeshManager(CATIMSHMeshManager *iMeshManager, CATBoolean iRenumberModel, CATBoolean iCheckCyclicity ) ;
    // Check the cyclicity of the current field model object. 
    // @param iChild : The child that you want to check.
    // @param oList  : A user list containing the offending object followed by the objects recursively traversed and ending by the current object.
    //                 This parameter must be equal to NULL_exp when this method is called.
    HRESULT CheckCyclicity(const CATAnalysisExplicitChild &iChild, CATAnalysisExplicitListUsr &oList) const ;

    // Check the cyclicity of all the field model starting by the Analysis Set. 
    // @param oList : A user list containing the offending object followed by the objects recursively traversed and ending by the current object.
    //                This parameter is allocated by this method and must be deleted by the caller.
    HRESULT CheckCyclicity(CATAnalysisExplicitListUsr &oList) const ;
    // Uses the rules database to check the validity of the current field model object starting by the Analysis Set. 
    // @param oList : A user list containing the offending object followed by the objects recursively traversed and ending by the current object.
    //                This parameter is allocated by this method and must be deleted by the caller.
    // @param Check : This parameter specifies the check mode.
    HRESULT CheckValidity(CATAnalysisExplicitListUsr &oList, const int Check = CATSamCheckTypeAll) const ;
    // Stream && UnStream
    HRESULT Stream(CATSamStream &oStream) const ;
    HRESULT UnStream(CATSamStream &iStream) ;
    // InitMembers && InitConversion
    HRESULT InitMembers() const ;
    HRESULT InitConversion(CATSamPhysicalType iConversionLength) ;
    // Converts a physical type number from a new database of rules to the current one.
    // @param ioPhysicalType : The physical type number to convert.
    HRESULT Convert(CATSamPhysicalType &ioPhysicalType) const ;
    // Stores the conversion between physical types.
    // @param iVersion      : La version de stream.
    // @param iPhysicalType :The new physical type number.
    // @param iIdentity     : The identifier of the physical type.
    HRESULT StoreConversion(int iVersion, CATSamPhysicalType iPhysicalType, const char *iIdentity) ;
    // Activate the Undo mode.
    void ActivateUndoMode() const ;
    // Desactivate the Undo mode.
    void DesactivateUndoMode() const ;
    // Set the Explicit container
    // @param iExplicitContainer which the Topology is linked to. : The Explicit container you want to link to.
    HRESULT SetExplicitContainer(const CATIContainer* iExplicitContainer);
    // Set the CATAnalysisAssemblyManager
    // @param iAssemblyManager : The CATAnalysisAssemblyManager instance
    HRESULT SetAssemblyManager(const CATAnalysisAssemblyManager* iAssemblyManager);
    // GetFieldModel
    inline CATSamModelFieldModel* GetFieldModel() const;
    // Clean all Proxy Link. Useful in case of assembly analysis.
    int CleanProxyLink() const;
    // Returns an addrefed handler to the ExplicitModel.
    CATAnalysisExplicitModelHandler *GetModelHandler();

    // DATA MEMBERS
    CATSamModelFieldModel*           _FieldModel;
    CATAnalysisExplicitRulesData*    _RulesData ;
    CATAnalysisExplicitTopology*     _Topology ;
    CATAnalysisAssemblyManager*      _AssemblyManager ;
    CATSamPhysicalType               _ConversionLength ;
    CATSamPhysicalType               _GlobalRefFramePhysicalType ;
    CATSamPhysicalType*              _Conversion ;
    CATIContainer*                   _ExplicitContainer ;
    CATAnalysisExplicitModelHandler* _Handler;

	enum CyclicityStatus
	{
	SUCCESSFUL,
	FAILED,
	UNKNOWN
	} ;

 
	 CyclicityStatus _CyclicityStatus;  //LMS Performance issue
} ;

/*****************************************************************/
/* Implementation of inline Methods                              */
/*****************************************************************/

inline const CATAnalysisExplicitRulesData * CATAnalysisExplicitModel::GetRulesData() const { return _RulesData ; }
inline CATSamModelFieldModel* CATAnalysisExplicitModel::GetFieldModel() const { return _FieldModel ; } 
#endif
