// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitTopologyUnit
//
//=============================================================================
//
// Usage Notes: basic axis information of a collector characteristic
//
//=============================================================================
// July 2000   Creation                                                     JND
//=============================================================================
#ifndef CATAnalysisExplicitTopology_H
#define CATAnalysisExplicitTopology_H

#include "CATSAM0Explicit.h"
#include "CATAnalysisExplicitParent.h"

class CATMSHNode;
class CATMSHElement;
class CATIMSHMeshManager ;
class CATAnalysisExplicitModel; 
class CATAnalysisExplicitTopologyExtension;

class CATIMSHMeshManager;
class CATSamBufferManager;

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

//-----------------------------------------------------------------------

/**
* Common basic services for Field Model Objects.
* Definition of the Topology of the FEM Model.<br>
* This class provide services to obtain :<br>
*    - The array of Nodes,<br>
*    - The array of Elements,<br>
*    - The array of Elements linked to a Node,<br>
*    - The array of Nodes linked to an Element.<br>
*/
class ExportedByCATSAM0Explicit CATAnalysisExplicitTopology
{ 
    friend class CATAnalysisExplicitModel;
    friend class CATAnalysisExplicitTopologyUnit;
    friend class CATAnalysisExplicitTopologyAssembly;
    friend class CATAnalysisExplicitTopologyServices;

public:
    /**
    * Increase the reference counter by 1.
    */
    int AddRef() const;

    /**
    * Decrease the reference counter by 1.
    */
    virtual int Release() const = 0;

    /**
    * Requests the topology delayed destruction.
    * <br> Inline Method. <br>
    * The topology will be destroyed as soon as this will be possible.
    * @param iRequestDestruction
    *   This parameter indicates the request for the collector deletion.
    */
    virtual void RequestDelayedDestruction(CATBoolean iRequestDestruction = TRUE);

    /**
    * Retrieves a pointer to the mesh manager to which the Topology is linked to.<br>
    * An AddRef() is done on the mesh manager before returning the pointer.
    * @return  CATBaseUnknown#Release 
    * * @see CATIMSHMeshManager
    */
    CATIMSHMeshManager * GetMeshManager() const;
       
    /**
    * Get the number of Nodes of the FEM Model.
    */
    virtual int GetNbNodes() const = 0;
    
    /**
    * Get the number of Nodes of the FEM Model.
    */
    virtual HRESULT GetNbNodes(int &oNbNodes) const = 0;
    
    /**
    * Get the number of Virtual Nodes of the FEM Model.
    */
    virtual int GetNbVirtualNodes() const = 0;
    
    /**
    * Get the number of Virtual Nodes of the FEM Model.
    */
    virtual HRESULT GetNbVirtualNodes(int &oNbVirtualNodes) const = 0;
    
    /**
    * Get the number of Elements of the FEM Model.
    */
    virtual int GetNbElements() const = 0;
    
    /**
    * Get the number of Elements of the FEM Model.
    */
    virtual HRESULT GetNbElements(int &oNbElements) const = 0;
    
    /**
    * Get the number of Virtual Elements of the FEM Model.
    */
    virtual  int GetNbVirtualElements() const = 0;
    
    /**
    * Get the number of Virtual Elements of the FEM Model.
    */
    virtual HRESULT GetNbVirtualElements(int &oNbElements) const = 0;
    
    /**
    * Get the array of Nodes of the FEM Model.
    * @param oNodes
    *   The array of Nodes.
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    */
    virtual HRESULT GetNodes(const CATSamExplicitPtr* &oNodes) const = 0;
    
    /**
    * Get the array of Nodes of the FEM Model.
    * @param oNodes
    *   The array of CATMSHNode (must be allocated with the size returned by GetNbNodes)
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be allocated with the size returned by the method GetNbNodes() before calling
    *      the method, and be deleted after use.
    * @see CATMSHNode
    */
    virtual HRESULT GetNodes(const CATMSHNode** oNodes) const = 0;
    
    /**
    * Get the array of Virtual Nodes of the FEM Model.
    * @param oNodes
    *   The array of Virtual Nodes.
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    */
    virtual HRESULT GetVirtualNodes(const CATSamExplicitPtr* &oNodes) const = 0;
    
    /**
    * Get the array of Elements of the FEM Model.
    * @param oElements
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    *   The array of Elements.
    */
    virtual HRESULT GetElements(const CATSamExplicitPtr* &oElements) const = 0;
    
    /**
    * Get the array of Elements of the FEM Model.
    * @param oElements
    *   The array of CATMSHElement (must be allocated with the size returned by GetNbElements).
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be allocated with the size returned by the method GetNbElements() before calling
    *      the method, and be deleted after use.
    * @see CATMSHElement
    */
    virtual HRESULT GetElements(const CATMSHElement** oElements) const = 0;
    
    /**
    * Get the array of Virtual Elements of the FEM Model.
    * @param oElements
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    *   The array of Elements.
    */
    virtual HRESULT GetVirtualElements(const CATSamExplicitPtr* &oElements) const = 0;
    
    /**
    * Get the number of Nodes linked to an Element.
    * @param iElement
    *   The Element.
    */
    virtual   int GetNbNodesLinkedToElement(CATSamExplicitPtr iElement) const = 0;
    
    /**
    * Get the number of Nodes linked to an Element.
    * @param iElement
    *   The Element.
    */
    virtual int GetNbNodesLinkedToElement(const CATMSHElement* iElement) const = 0;
    
    /**
    * Get the array of Nodes linked to an Element.
    * The method return the number of Nodes.<br>
    * @param iElement
    *   The Element.
    * @param oLinkedNodes
    *   The array of Nodes linked to the element.
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    */
    virtual HRESULT GetNodesLinkedToElement(CATSamExplicitPtr iElement, const CATSamExplicitPtr* &oLinkedNodes) const = 0;
    
        /**
        * Get the array of Nodes linked to an Element.
        * @param iElement
        *   The Element.
        * @param oLinkedNodes
        *   The array of Nodes linked to the element (must be allocated with the size returned by GetNbNodesLinkedToElement).
        *   <br><b>Lifecycle rules deviation</b>
        *      Must be allocated with the size returned by the method GetNbNodesLinkedToElement() before calling
        *      the method, and be deleted after use.
        * @see CATMSHNode, CATMSHElement
    */
    virtual HRESULT GetNodesLinkedToElement(const CATMSHElement* iElement, const CATMSHNode**   oLinkedNodes) const = 0;
    
        /**
        * Get the number of Elements linked to a Node.
        * @param iNode
        *   The Node.
    */
    virtual int GetNbElementsLinkedToNode(CATSamExplicitPtr iNode) const = 0;
    
    /**
    * Get the number of Elements linked to a Node.
    * @param iNode
    *   The Node.
    */
    
    virtual int GetNbElementsLinkedToNode(const CATMSHNode*  iNode) const = 0;
    
    /**
    * Get the array of Elements linked to a Node.
    * @param iNode
    *   The Node.
    * @param oLinkedElements
    *   The array of Elements linked to the Node.
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be set to NULL before calling the method, and not be deleted after use.
    */
    virtual HRESULT GetElementsLinkedToNode(CATSamExplicitPtr iNode, const CATSamExplicitPtr* &oLinkedElements) const = 0;
    
    /**
    * Get the array of Elements linked to a Node.
    * @param iNode
    *   The Node.
    * @param oLinkedElements
    *   The array of Elements linked to the Node (must be allocated with the size returned by GetElementsLinkedToNode).
    *   <br><b>Lifecycle rules deviation</b>
    *      Must be allocated with the size returned by the method GetElementsLinkedToNode() before calling
    *      the method, and be deleted after use.
    * @see CATMSHNode, CATMSHElement
    */
    virtual HRESULT GetElementsLinkedToNode(const CATMSHNode* iNode, const CATMSHElement** oLinkedElements) const = 0;
    
    
    /**
    * Set the Flag IsUpToDate. 
    * @param iUpToDate
    *   The value of the flag IsUpToDate.
    */
    void SetUpToDate(CATBoolean iUpToDate) const;

    /**
    * Clean the Virtual Nodes and Elements arrays in order to recalculate them if the flag is false.
    * @param iVirtualUpToDate
    *   The value of the flag IsVirtualUpToDate.
    */
    HRESULT SetVirtualUpToDate(CATBoolean iVirtualUpToDate) const;
    
    /**
    * Update activity status of the mesh.
    */
    virtual HRESULT UpdateActivityStatus() const = 0;
    

protected :

   /**
    * Set the mesh manager 
    * @param iMeshManager which the field model is linked to.<br>
    *    The mesh manager you want to link to.
    * @see CATIMSHMeshManager
    */
    void SetMeshManager(const CATIMSHMeshManager *iMeshManager);
 
    /**
    * Assigns the Child Topology of its Parent Topology. It is useful in case of assemble Topology.
    * @param iTopoParent
    *   A reference to the explicit parent topology which this topology belongs to.
    */
    virtual HRESULT SetParentTopology(CATAnalysisExplicitModel* iModel) = 0;

    /**
    * Retrieves a pointer to the Topology parent of this topology. <br>
    */
    CATAnalysisExplicitTopology* GetParentTopology();  // inline

    /**
    * Build the array of Nodes of the instance.<br>
    */
    virtual HRESULT UpdateNodes() = 0;
    
    /**
    * Build the array of Nodes of the instance.<br>
    */
    virtual HRESULT UpdateNbNodes() = 0;
    
    /**
    * Build the array of EntitiesFlagsForNodes of the instance.<br>
    */
    virtual HRESULT UpdateEntitiesFlagsForNodes() = 0;

    /**
    * Build the array of Elements Linked to Nodes of the instance.<br>
    */
    virtual HRESULT UpdateElements() = 0;
    
    /**
    * Build the array of Elements Linked to Nodes of the instance.<br>
    */
    virtual  HRESULT UpdateNbElements() = 0;
    
    /**
    * Build the array of EntitiesFlagsForElements of the instance.<br>
    */
    virtual HRESULT UpdateEntitiesFlagsForElements() = 0;

    /**
    * Build the array of Nodes linked to Elements of the instance.<br>
    */
    virtual HRESULT UpdateNodesLinkedToElements() = 0;
    
    /**
    * Build the array of Nodes linked to Elements of the instance.<br>
    */
    virtual HRESULT UpdateNbNodesLinkedToElements() = 0;
    
    /**
    * Build the array of Elements Linked to Nodes of the instance.<br>
    */
    virtual HRESULT UpdateElementsLinkedToNodes() = 0;

    /**
    * Update the number of Elements Linked to Nodes of the instance.<br>
    */
    virtual HRESULT UpdateNbElementsLinkedToNodes() = 0;

    /**
    * Refresh the instance.<br>
    */
    HRESULT Refresh();

    /**
    * Set the MeshManager to NULL and clean the Assembly child topologies if needed.<br>
    */
    virtual void CleanMeshManagerAndAssembly();

    /**
    * Clean the array of Nodes of the instance.<br>
    */
    virtual HRESULT CleanNodes() = 0;

    /**
    * Clean the array of Nodes of the instance.<br>
    */
    virtual HRESULT CleanVirtualNodes() = 0;

    /**
    * Clean the array of EntitiesFlagsForNodes of the instance.<br>
    */
    virtual HRESULT CleanEntitiesFlagsForNodes() = 0;

    /**
    * Clean the array of EntitiesFlagsForVirtualNodes of the instance.<br>
    */
    virtual HRESULT CleanEntitiesFlagsForVirtualNodes() = 0;

    /**
    * Clean the array of Elements of the instance.<br>
    */
    virtual HRESULT CleanElements() = 0;

    /**
    * Clean the array of Elements of the instance.<br>
    */
    virtual HRESULT CleanVirtualElements() = 0;

    /**
    * Clean the array of EntitiesFlagsForElements of the instance.<br>
    */
    virtual HRESULT CleanEntitiesFlagsForElements() = 0;

    /**
    * Clean the array of EntitiesFlagsForVirtualElements of the instance.<br>
    */
    virtual HRESULT CleanEntitiesFlagsForVirtualElements() = 0;

    /**
    * Clean the array of Nodes linked to Elements of the instance.<br>
    */
    virtual HRESULT CleanNodesLinkedToElements() = 0;

    /**
    * Clean the array of number of Nodes linked to Elements of the instance.<br>
    */
    virtual HRESULT CleanNbNodesLinkedToElements() = 0;

    /**
    * Clean the array of Elements linked to Nodes of the instance.<br>
    */
    virtual HRESULT CleanElementsLinkedToNodes() = 0;

    /**
    * Clean the array of number of Elements linked to Nodes of the instance.<br>
    */
    virtual HRESULT CleanNbElementsLinkedToNodes() = 0;

    /**
    * Set the array of Nodes of the instance on iNodes.<br>
    */
    virtual HRESULT SetNodes(CATSamExplicitPtr* iNodes) = 0;

    /**
    * Set the array of EntitiesFlagsForNodes of the instance on iEntitiesFlagsForNodes.<br>
    */
    virtual HRESULT SetEntitiesFlagsForNodes(const char* iEntitiesFlagsForNodes) = 0;

    /**
    * Set the array of VirtualNodes of the instance on iVirtualNodes.<br>
    */
    virtual HRESULT SetVirtualNodes(CATSamExplicitPtr* iVirtualNodes) = 0;

    /**
    * Set the array of EntitiesFlagsForVirtualNodes of the instance on iEntitiesFlagsForVirtualNodes.<br>
    */
    virtual HRESULT SetEntitiesFlagsForVirtualNodes(const char* iEntitiesFlagsForVirtualNodes) = 0;

    /**
    * Set the array of Elements of the instance on iElements.<br>
    */
    virtual HRESULT SetElements(CATSamExplicitPtr* iElements) = 0;

    /**
    * Set the array of EntitiesFlagsForElements of the instance on iEntitiesFlagsForElements.<br>
    */
    virtual HRESULT SetEntitiesFlagsForElements(const char* iEntitiesFlagsForElements) = 0;

    /**
    * Set the array of VirtualElements of the instance on iVirtualElements.<br>
    */
    virtual HRESULT SetVirtualElements(CATSamExplicitPtr* iVirtualElements) = 0;

    /**
    * Set the array of EntitiesFlagsForVirtualElements of the instance on iEntitiesFlagsForVirtualElements.<br>
    */
    virtual HRESULT SetEntitiesFlagsForVirtualElements(const char* iEntitiesFlagsForVirtualElements) = 0;

    /**
    * Set the array of NodesLinkedToElements of the instance on iNodesLinkedToElements.<br>
    */
    virtual HRESULT SetNodesLinkedToElements(CATSamExplicitPtr* iNodesLinkedToElements) = 0;

    /**
    * Set the array of NbNodesLinkedToElements of the instance on iNbNodesLinkedToElements.<br>
    */
    virtual HRESULT SetNbNodesLinkedToElements(int* iNbNodesLinkedToElements) = 0;

    /**
    * Set the array of ElementsLinkedToNodes of the instance on iElementsLinkedToNodes.<br>
    */
    virtual HRESULT SetElementsLinkedToNodes(CATSamExplicitPtr* iElementsLinkedToNodes) = 0;

    /**
    * Set the array of NbElementsLinkedToNodes of the instance on iNbElementsLinkedToNodes.<br>
    */
    virtual HRESULT SetNbElementsLinkedToNodes(int* iNbElementsLinkedToNodes) = 0;

    /**
    * In order to get a child topology which points on an assembly topology.<br>
    */
    virtual void SetFullTopo(CATBoolean iBool) = 0;

 private :
    // Friend Class
    friend class CATCharacCollectorFactory;
    friend class CATCharacCollectorFactoryForEntity;
    friend class CATCharacCollectorFactoryForLocalEntity;
    friend class CATESamCharacCollectorForCombinedEntity;
    friend class CATESamCharacCollectorForProxyEntity;
    friend class CATAnalysisExplicitChild;

      /**
    * Get Entities Flags for Nodes.
    */
    virtual HRESULT GetNodesFlags(int &oNbNodes, const char* &oNodesFlags) const = 0;
    
    /**
    * Get Entities Flags for Elements.
    */
    virtual HRESULT GetElementsFlags(int &oNbElements, const char* &oElementsFlags) const = 0;

    /**
    * Get Entities Flags for Virtual Nodes.
    */
    virtual HRESULT GetVirtualNodesFlags(int &oNbVirtualNodes, const char* &oVirtualNodesFlags) const = 0;
    
    /**
    * Get Entities Flags for Virtual Elements.
    */
    virtual HRESULT GetVirtualElementsFlags(int &oNbVirtualElements, const char* &oVirtualElementsFlags) const = 0;
   
    /**
    * Get the number of Nodes of the FEM Model.
    */
    virtual int GetUnitNbNodes() const = 0;

    /**
    * Get the number of Virtual Elements of the FEM Model.
    */
    virtual  int GetUnitNbElements() const = 0;

    /**
    * Returms TRUE if the topology is an assembly topology.
    * @param oIsRoot
    *   This parameter returns TRUE if the topology is the root topology.
    */
    virtual CATBoolean IsAssemblyTopology(CATBoolean &oIsRoot) ;

    /**
    * Retrieves the list of linked topologies.
    * @param oLeavesTopologies  List of topologies pointers.
    * @param oNbPointedTopology Size of the list.
    */
    virtual HRESULT GetLeavesTopologies(CATAnalysisExplicitTopology * const * &oLeavesTopologies, int &oNbPointedTopology) const = 0;

   /**
    * Get the offset for the Nodes or Elements of a given Model.
    * @param iCategory 
    *    CATSamValueNode or CATSamValueElement.
    * @param iModel
    *    The Model for which you want the offset.
    */
    virtual int GetOffsetForValueTypeFromModel(CATSamValue iCategory, CATAnalysisExplicitModel *iModel) const;

   /**
    * Flags a Topology in order to know if we have condensed nodes - usefull to calculate the NbElementsLinkedToNodes -.
    * @param iValue
    *   TRUE or FALSE.
    */
    inline void SetHasCondensedNodes(CATBoolean iValue);
 
    friend class CATAnalysisExplicitTopologyExtension;
    friend class CATAnalysisExplicitTopologyExtensionElementsOfNodes;
    /**
    * Get TopologyExtension.<br>
    */
    virtual HRESULT GetTopologyExtension(int iExtensionType, CATAnalysisExplicitTopologyExtension* &oExtension, CATBoolean iInstanciate = TRUE);

    virtual HRESULT WarnParent();

  // DATAMEMBERS
  protected:
    int                                    _NbNodes;
    int                                    _NbVirtualNodes;
    int                                    _NbElements;
    int                                    _NbVirtualElements;
    int                                   *_NbNodesLinkedToElements;
    int                                   *_NbElementsLinkedToNodes;
    const char                            *_EntitiesFlagsForNodes;
    const char                            *_EntitiesFlagsForElements;
    const char                            *_EntitiesFlagsForVirtualNodes;
    const char                            *_EntitiesFlagsForVirtualElements;
    int                                   *_OffsetOnNodes;
    int                                   *_OffsetOnElements;
    int                                   *_OffsetOnVirtualNodes;
    int                                   *_OffsetOnVirtualElements;

    CATSamExplicitPtr                     *_Nodes;
    CATSamExplicitPtr                     *_VirtualNodes;
    CATSamExplicitPtr                     *_Elements;
    CATSamExplicitPtr                     *_VirtualElements;
    CATSamExplicitPtr                     *_NodesLinkedToElements;
    CATSamExplicitPtr                     *_ElementsLinkedToNodes;

    CATAnalysisExplicitParent              _FEMModel;
    CATBoolean                             _IsUpToDate;
    CATBoolean                             _MustBeRenumbered;
    CATIMSHMeshManager                    *_MeshManager ;
    CATAnalysisExplicitModel              *_ExplicitModel ;

    CATAnalysisExplicitTopology*           _ParentTopology;

    int                                    _NumReference;
    int                                    _NbActiveExtensions;
    CATBoolean                             _IsRequestForDestruction;    

    CATAnalysisExplicitTopologyExtension **_TopologyExtensions;
    CATBoolean                             _OnlyNbNodesOrElements; 
    CATBoolean                             _IsAssembly; 
    CATBoolean                             _HasACondensedNode; 

    // Constructor and destructor for internal use only
    CATAnalysisExplicitTopology(); 
    virtual ~CATAnalysisExplicitTopology();

    // Management of memory with a buffer
    static CATSamBufferManager* CATSamExpTopoBufferManager;        
    static HRESULT GetMemoryArea(void**ioArea, size_t iSize);  
    static HRESULT ReleaseMemoryArea(void**ioArea);
    void ReleaseBufferManager();
};

// =============================================================================
// CATAnalysisExplicitTopology::GetParentTopology()
// =============================================================================
inline CATAnalysisExplicitTopology* CATAnalysisExplicitTopology::GetParentTopology()
{
  return _ParentTopology;
}

// =============================================================================
// CATAnalysisExplicitTopology::RequestDelayedDestruction()
// =============================================================================
inline void CATAnalysisExplicitTopology::RequestDelayedDestruction(CATBoolean iRequestDestruction)
{
  _IsRequestForDestruction = iRequestDestruction;
}

// =============================================================================
// CATAnalysisExplicitTopology::SetHasCondensedNodes()
// =============================================================================
inline void CATAnalysisExplicitTopology::SetHasCondensedNodes(CATBoolean iValue)
{
  _HasACondensedNode = iValue;
}

#endif
