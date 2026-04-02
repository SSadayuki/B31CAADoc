#ifndef CATMSHStIntNode_h
#define CATMSHStIntNode_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

//=============================================================================
//
// CATMSHStIntNode :
//
// Objet modèlisant un noeud dans le MSHStudio
//
//=============================================================================
// Octobre 1998  Création                          Gerard Soubeyre
//=============================================================================

#include "MSHStudio.h"
#include "CATMSHStNode.h"
#include "CATSysAllocator.h"

/**
 * Object representing a node in the studio.
 */

class ExportedByMSHStudio CATMSHStIntNode : public CATMSHStNode
{
  friend class CATMSHStPartitionTransaction;

public:
  CATDeclarePagedNewOverride(CATMSHStIntNode)

  // Méthodes et données membres publiques

public:
/**
 * @nodoc
 * Constructeur avec un pere
 */
  CATMSHStIntNode ( CATMSHStudioPartition * Partition, const CATMSHPointOnSupport * Point, CATMSHStudioObject * Support);
/**
 * @nodoc
 * Lecture du type studio
 */
  virtual const CATMSHStTypeOfObject GetType() const {return CATMSHStTypeIntNode;};
/**
 * @nodoc 
 * Type de l'objet
 */
  virtual const char * IsA () const {return "IntNode";};

 // Données membres

  static int NumberOf;

// Méthodes et données membres protected

protected:

/**
 * @nodoc
 * Destructeur
 */
  virtual ~CATMSHStIntNode ();
};
#endif



