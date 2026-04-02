#ifndef CATMSHStudioStruct_h
#define CATMSHStudioStruct_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0 
 * @CAA2Usage U1 
 */
#include "MSHStudio.h"

#define CATMSHStNbStacks    4
#define CATMSHStNbUFlags    6
#define MaxNbNodesByStFace  4
#define MaxNbNodesByMSHElement  27

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 199
//=============================================================================
//
// CATMSHStStudio :
//
// Cet include definit les structures pour MSHStudio
//
//=============================================================================
// Juillet 2000  Création                          Gerard Soubeyre
//=============================================================================

class CATMSHStNode;
class CATMSHStudioObject;
class CATMSHGeometricalEnginePro;
class CATIMSHConnectivity;
class CATMSHConnecCriteria;
class CATIMSHStPartition;

typedef unsigned int CATMSHStPartitionTag;

/**
 * Dimension of the studio object.
 * @param CATMSHStTypeNode
 *   The studio object is a node.
 * @param CATMSHStTypeEdge
 *   The studio object is an edge.
 * @param CATMSHStTypeFace
 *   The studio object is a face.
 * @param CATMSHStTypeInter
 *   The studio object is an intermediate node.
 */
#define CATMSHStNbType      5
enum CATMSHStTypeOfObject
{
  CATMSHStTypeNode    = 0,
  CATMSHStTypeEdge    = 1,
  CATMSHStTypeFace    = 2,
  CATMSHStTypeRegion  = 3,
  CATMSHStTypeIntNode = 4
};

enum CATMSHStQualityType 
{
  CATMSHStQualityValue,
  CATMSHStQualityBad,
  CATMSHStQualityPoor,
  CATMSHStQualityPoorAndBad,
  CATMSHStQualityAll
};

enum CATMSHStMeshType 
{
  CATMSHSt1DMesh,
  CATMSHStTriangleFree,
  CATMSHStQuadFree,
  CATMSHStSurfacePattern,
  CATMSHStVolumeFree,
  CATMSHStVolumePattern
};

enum CATMSHStMeshState
{
  CATMSHStUnknown       = 0,
  CATMSHStEmptyMesh     = 1,
  CATMSHStPartlyMeshed  = 2,
  CATMSHStOverlapMeshed = 3,
  CATMSHStFullMeshed    = 4
};


struct CATMSHStQualityFilter
{
  CATMSHStQualityType QType;
  double QValue;
};

struct CATMSHStQEElement
{
  double                    Worst;
  double                    Average;
  CATIMSHStPartition *      Partition;
  CATIMSHConnectivity *     Connec;
  CATMSHGeometricalEnginePro * CE;
  CATMSHConnecCriteria *    Criteria;
  CATMSHStudioObject *      Element;
  int *                     NumNodes;
  int                       NbNodes;
  int                       NbBads;
  int                       NbPoors;
};

struct CATMSHStQEInfo
{
  double                   Average;
  double                   Worst;
  double                   Best;
  double                   Delta;
  double                 (*Normals)[3];
  int                      NbElemBad;
  int                      NbElemPoor;
  int                      WorstElements;
  int                      BestElements;
  int                      NbElements;
  CATMSHStQEElement *      ElementInfo;
};
/**
 * Define the mesh specification conditions for each of his partition.
 */  
enum CATMSHStSpecConditionType
{
    CATMSHStSpecConditionUnknown     =  0,
    CATMSHStSpecConditionExclusive   =  1,
    CATMSHStSpecConditionShare       =  2,
    CATMSHStSpecConditionSource      =  3
};
/**
 * Define the mesh specification conditions for each of his partition.
 */  
struct ExportedByMSHStudio CATMSHStSpecCondition
{
/**
 * If the mesh specification impose nodes abscissa on the partition.<dd>
 * Default value is <tt>Abscissa = NULL</tt>.
 */  
    double     * Abscissa;
/**
 * If the mesh specification is exclusive on the partition.<dd>
 * Default value for a partition 2D is <tt>Exclusive=1</tt>.
 */  
    CATMSHStSpecConditionType Type;     
/**
 * If the mesh specification impose a number of nodes on the partition.<dd>
 * Default value is <tt>NbImposedNodes = 0</tt>.
 */  
    int         NbImposedNodes;
/**
 * Define the mesh specification conditions for a current partition.
 * Default value is <tt>NbImposedEdges = 0</tt>.
 */  
    int         NbImposedEdges;
/**
 * Initialize the struct: set to NULL, CATMSHStSpecConditionUnknown,0,0
 */
    void Initialize();
/**
 * Remove the struct: delete Abscissa ans set to NULL, CATMSHStSpecConditionUnknown,0,0
 */
    void Remove();
};
/**
 * @nodoc
 */  
enum CATMSHStSpecCompatibility
{
    CATMSHStSpecUnknown     =  0,
    CATMSHStSpecConflictual =  1,
    CATMSHStSpecActive      =  2,
    CATMSHStSpecStandBy     =  3,
    CATMSHStSpecSource      =  4
};

#endif




