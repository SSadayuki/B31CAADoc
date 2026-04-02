// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U3
 */

#ifndef CATIMSHStudio_H
#define CATIMSHStudio_H

#include "MSHStudio.h"
#include "CATMSHStudioStruct.h"
#include "CATIMSHStudioSpec.h"
#include "CATMSHStListOfObjects.h"
#include "CATMSHStListOfPartitions.h"
#include "CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "list.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMSHStudio IID IID_CATIMSHStudio;
#else
extern "C" const IID IID_CATIMSHStudio ;
#endif

class CATIMSHConnectivity;
class CATIMSHSizeMap;
class CATMSHTessSupport;
class CATMSHStudioObject;
class CATIMSHStPartition;
class CATMSHStListOfPartitions;
class CATMSHStNode;
class CATMSHStEdge;
class CATMSHStFace;
class CATMSHStStack;
class CATMSHQualityInfos;
class CATMSHHashPTab;
class CATIMSHStudioSpec;
class CATMSHStudioVisuManager;
class CAT3DRep;
class CATIModelEvents;
class CATExtIVisu;
class CATViewer;
class CATIUndoTransaction;
class CATEMSHStudioUndoRedo;
class CATFrmEditor;
class CATMSHNode;
struct CATMSHAssElementFace;
struct CATMSHAssElementEdge;
class CATMathBox;
class CATMSHOpenCodeRecorder;
class CATMSHStSpecManager;

//------------------------------------------------------------------
struct CATMSHStDebugOptions
{
  short WriteOnError;
  short Mesh1DOnly;
  short MeshBandesOnly;
};

/**
 * Interface representing a mesh studio.
 * <b>Role</b>: A studio manages a set of partitions. <dd> 
 * It also manages the mesh specifications, as for creation, compatibility check and removal.<dd>
 */
class ExportedByMSHStudio CATIMSHStudio: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Initialize the contains of the Studio
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The Initialize is OK.
 *   <dt>E_FAIL</dt><dd>The Initialize failed.
 *   </dl>
 * @param Base
 *   Object that give infos to the <b>Studio</b>.
 */
  virtual HRESULT Initialize ( CATBaseUnknown * Base ) =0;
/**
 * Remove the contains of the Studio
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The Remove is OK.
 *   <dt>E_FAIL</dt><dd>The Remove failed.
 *   </dl>
 */
  virtual HRESULT Remove () =0;
/**
 * @nodoc
 * @return CATBaseUnknown#Release
 */
  virtual CATBaseUnknown * GetImplementation () =0;
/**
 * @nodoc
 */
  virtual CATBaseUnknown * GetBase () =0;
/**
 * @nodoc
 */
  virtual CATMSHStSpecManager * GetSpecManager () =0;
/**
 * @nodoc
 */
  virtual int ActivateSupport( const CATIMSHStPartition * Partition)=0;
/**
 * @nodoc
 */
  virtual int IsEmpty() const=0;
/**
 * @nodoc
 */
  virtual void Empty ( int KeepFrozen=0 )=0;
/**
 * UnFreeze all the studio
 */
  virtual HRESULT UnFreeze ()=0;
/**
 * @nodoc
 */
  virtual CATMSHStNode * FindStNode (CATBaseUnknown * SelNode )=0;
/**
 * @nodoc
 */
  virtual CATMSHStEdge * FindStEdge (CATBaseUnknown * SelEdge )=0;
/**
 * @nodoc
 */
  virtual CATMSHStFace * FindStFace (CATBaseUnknown * SelFace )=0;
/**
 * @nodoc
 */
  virtual HRESULT Optimize ( int Global , CATBaseUnknown * EventPublisherProgress=NULL )=0;
/**
 * @nodoc
 */
  virtual void UnOptimized()=0;
/**
 * @nodoc
 */
  virtual void Optimized()=0;
/**
 * @nodoc
 */
  virtual void Check (int Dimension=2)=0;
/**
 * @nodoc
 */
  virtual int CheckMesh (int Dimension=2,int Level=0)=0;
/**
 * @nodoc
 */
  virtual HRESULT GetAllPartitions(CATMSHStListOfPartitions &Partitions) const=0;
/**
 * @nodoc
 */
  virtual HRESULT GetUnMeshed(CATMSHStListOfPartitions &Partitions) const=0;
/**
 * @nodoc
 */
  virtual void Dump ()=0;
/**
 * @nodoc
 */
  virtual HRESULT ConnectVisu (  CATBaseUnknown * Father )=0;
/**
 * @nodoc
 */
  virtual HRESULT DisconnectVisu ()=0;
/**
 * @nodoc
 */
  virtual CATIModelEvents * GetModelEvents ()=0;
/**
 * @nodoc
 */
  virtual CATExtIVisu * GetVisu()=0;
/**
 * @nodoc
 */
  virtual HRESULT UpdateVisu( CATBaseUnknown * Base )=0;
/**
 * @nodoc
 */
  virtual HRESULT SetVisuManager( CATMSHStudioVisuManager * Manager )=0;
/**
 * @nodoc
 */
  virtual HRESULT UpdateVisualization()=0;
/**
 * @nodoc
 */
  virtual CAT3DRep * BuildRep ()=0;
/**
 * @nodoc
 */
  virtual HRESULT AddRep ( CAT3DRep * Rep )=0;
/**
 * @nodoc
 */
  virtual HRESULT RemoveRep ( CAT3DRep * Rep )=0;
/**
 * @nodoc
 */
  virtual void SetMinimizeSimplex ( int MinimizeSimplex ) = 0;
/**
 * @nodoc
 */
  virtual int GetMinimizeSimplex () const = 0;
/**
 * @nodoc
 */
  virtual void SetOptimizeRegularity ( int OptimizeRegularity ) = 0;
/**
 * @nodoc
 */
  virtual int GetOptimizeRegularity () const = 0;
/**
 * @nodoc
 */
  virtual void SetElementOrder ( int ElementOrder ) = 0;
/**
 * @nodoc
 */
  virtual int GetElementOrder () const = 0;
/**
 * @nodoc
 */
  virtual void SetSizeMap ( CATIMSHSizeMap * Map ) = 0;
/**
 * @nodoc
 */
  virtual CATIMSHSizeMap * GetSizeMap () const = 0;
/**
 * @nodoc
 */
  virtual CATMSHHashPTab * GetNodeTable () =0;
/**
 * @nodoc
 */
  virtual void SetNodeTable (CATMSHHashPTab * NodeTable)=0;
/**
 * @nodoc
 */
  virtual void SetGeomSupport (CATMSHTessSupport * GeomSupport)=0;
/**
 * @nodoc
 */
  virtual HRESULT LocateOnSupport()=0;
/**
 * @nodoc
 */
  virtual CATIMSHStPartition * GetFirstPartition () const=0;
/**
 * @nodoc
 */
  virtual void ResetActivePartition()=0;
/**
 * @nodoc
 */
  virtual CATMSHQualityInfos * GetQualityInfos () const=0;
/**
 * @nodoc
 */
  virtual void SetQualityInfos ( CATMSHQualityInfos * QualityInfos ) =0;
/**
 * @nodoc
 */
  virtual HRESULT BuildQualityInfos ( CATMSHStMeshType Type, CATMSHQualityInfos *& oQualityInfos )=0;
/**
 * @nodoc
 */
  virtual double AnalyzeQuality( CATMSHQualityInfos * QualityInfos = NULL )=0;
/**
 * @nodoc
 */
  virtual CATMSHTessSupport * GetGeomSupport () const=0;
/**
 * @nodoc
 */
  virtual void SetViewer (CATViewer * Viewer )=0;
/**
 * @nodoc
 */
  virtual void SetRecorder (CATMSHOpenCodeRecorder * Recorder )=0;
/**
 * @nodoc
 */
  virtual HRESULT Register ( CATMSHStudioObject * const Object )=0;
/**
 * @nodoc
 */
  virtual void UnRegister ( CATMSHStudioObject * const Object )=0;
/**
 * @nodoc
 */
  virtual int SizeOf () const=0;
/**
 * @nodoc
 */
  virtual unsigned int GetTag () const =0;
/**
 * @nodoc
 */
  virtual CATMSHStudioObject * FindElement ( CATIMSHConnectivity const * Connectivity,
		       int NbOfNodes, CATMSHStNode * const Nodes[] )=0;
/**
 * @nodoc
 */
  virtual CATIMSHConnectivity * GetConnectivity (unsigned int Tag) const=0;
/**
 * @nodoc
 */
  virtual unsigned int GetNumberOf (int StType) const=0;
/**
 * @nodoc
 */
  virtual unsigned int GetNumberOfPartitions (int Dimension=-1) const=0;
/**
 * @nodoc
 */
  virtual HRESULT Export (int Notify=0)=0;
/**
 * @nodoc
 */
  virtual void SetExternal (CATMSHStudioObject * const Object , const void * const External )=0;
/**
 * @nodoc
 */
  virtual HRESULT ExportAssociativity ()=0;
/**
 * @nodoc
 */
  virtual void * Export (CATMSHStudioObject * const Object)=0;
/**
 * @nodoc
 */
  virtual unsigned int GetExternalTag(const CATMSHStudioObject * const Object) const =0;
/**
 * @nodoc
 */
  virtual void DeleteExportedEntity ( CATMSHStudioObject * const Object)=0;
/**
 * @nodoc
 */
//  int Find ( CATMSHStudioObject * Object , int StType=-1 )=0;
/**
 * @nodoc
 */
  virtual CATMSHStNode * FindStNode ( void * Node )=0;
/**
 * @nodoc
 */
  virtual HRESULT GetAllElements(CATMSHStListOfObjects &ListOfElements) const=0;
/**
 * @nodoc
 */
  virtual int IsUndoActive() const=0;
/**
 * @nodoc
 */
  virtual CATIUndoTransaction * ActivateUndo (CATFrmEditor * Editor) =0;
/**
 * @nodoc
 */
  virtual void UnActivateUndo (CATFrmEditor * Editor) =0;
/**
 * @nodoc
 */
  virtual void SetExportUndo (int Export)=0;
/**
 * @nodoc
 */
  virtual  CATEMSHStudioUndoRedo * GetUndo() const=0;
/**
 * @nodoc
 */
  virtual int GetIncrement(int StType) const=0;
/**
 * @nodoc
 */
  virtual int GetFlag (void * User)=0;
/**
 * @nodoc
 */
  virtual void FreeFlag (int Flag)=0;
/**
 * @nodoc
 */
  virtual HRESULT DeleteRep ()=0;
/**
 * @nodoc
 */
  virtual void ResetMeshState()=0;
/**
 * @nodoc
 */
  virtual void ResetToRemesh()=0;
/**
 * @nodoc
 */
  virtual CATMSHStDebugOptions GetDebug() =0;
/**
 * @nodoc
 */
  virtual void SetDebug(CATMSHStDebugOptions Debug) =0;
/**
 * @nodoc
 */
 virtual CATMSHStMeshState GetMeshState( )=0;
/**
 * @nodoc
 */
 virtual HRESULT ComputeBox( CATMathBox &Box )=0;
/**
 * @nodoc
 */
 virtual CATIMSHStPartition * GetPartition(const unsigned int Tag) const=0;
/**
 * @nodoc
 */
  virtual HRESULT CreateNodes ( CATIMSHStPartition * Part, const int NbNodes ,
                        CATMSHNode * const Nodes[], CATMSHStListOfObjects &StNodes,
                        const int * Type=NULL, const int LocateOnSupport=0 , const int iRegister=1)=0;
/**
 * @nodoc
 */
  virtual HRESULT CreateEdge ( CATIMSHStPartition * Part, CATMSHAssElementEdge * ElemEdge, CATMSHStEdge * &Edge,
                               int &Created, const int LocateOnSupport=0 , const int iRegister=1, const int Orient=1)=0;
/**
 * @nodoc
 */
  virtual HRESULT CreateFace ( CATIMSHStPartition * Part, CATMSHAssElementFace * ElemFace, CATMSHStFace * &Face,
                               int &Created, const int LocateOnSupport=0 , const int iRegister=1, const int Orient=1)=0;
/**
 * @nodoc
 */
  virtual double GetGeometricTolerance ()  const =0;
/**
 * @nodoc
 */
  virtual int GetDimension() const = 0;
/**
 * @nodoc
 */
  virtual void SetDimension ( int Dimension ) = 0;
/**
 * @nodoc
 */
  virtual HRESULT CreateFromPartition( const CATIMSHStPartition * const Source, CATIMSHStPartition *& Target ) = 0;
/**
 * @nodoc
 */
  virtual CATIMSHStPartition * FindStPartition ( void * Base )=0;
/**
 * @nodoc
 */
  virtual HRESULT SetListOfCreatedPartions(CATListOfInt * PartitonsTags)=0;
/**
 * @nodoc
 */
  virtual HRESULT SetListOfDeletedPartions(CATListOfInt * PartitonsTags)=0;
/**
 * @nodoc
 */
  virtual HRESULT CreateStack ( CATMSHStStack *& Created )=0;

};

//------------------------------------------------------------------

#endif
