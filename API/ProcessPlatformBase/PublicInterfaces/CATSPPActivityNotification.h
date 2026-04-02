#ifndef _CATSPPActivityNotification
#define _CATSPPActivityNotification

#include "CATNotification.h"
#include "SP0BBOSM.h"

/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATSPPActivityVisManager :
//
//=============================================================================
// Implementation Notes:
//
//=============================================================================
// Usage:    This events show interactivity and are used to decode applicative
//           object.
//
//=============================================================================
// Class:    CATSPPActivityNotification
//           CATNotification
//
//=============================================================================
// Aout 1999 Creation                                   M. Roche
// Feb 2007	 Expose to PublicInterfaces for CAA			gny
//=============================================================================

/** 
* @CAA2Level L0
* @CAA2Usage U2 
*/

enum SPPModifyKind { 
  

  /***************************************************************************/
  /*      GESTION DES ACTIVITES                                              */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_ModifyIcon,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour apres assignation d'un Icone.
  // Type(s)    : CATIRedrawEvent, CATIModelEvents
  // Father Object: L'activite a laquelle on a associe l'Icone.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyLabel,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour apres assignation d'un Icone.
  // Type(s)    : CATIRedrawEvent, CATIModelEvents
  // Father Object    : L'activite a laquelle on a associe le label.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyID,
  // --------------------------------------------------------------------------
  //
  // Goal        : Provide notification if "processid" is modified
  // Type(s)    : CATIRedrawEvent, CATIModelEvents
  // Father Object    : Impacted activity whose ID is modified.
  // Son Object : None.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyActivity,
  // --------------------------------------------------------------------------
  //
  // Goal        : Un parametre de l'activite a ete modifie. Une remise a jour
  //              est necessaire.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : L'activite ( CATISPPAbstractActivity ou CATISPPActivityType )
  //              qui a ete modifiee.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyFather,
  // --------------------------------------------------------------------------
  //
  // Goal        : Un parent de l'activite a ete modifie. Une remise a jour
  //              est necessaire.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : L'activite dont un parent a ete modifie.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifySpecifiedBegin,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "SBD" d'une activite.
  // Type(s)    : CATIModelEvents
  // Father Object    : l activite a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------
  
  // --------------------------------------------------------------------------
  SPP_ModifySpecifiedCycleTime,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "SCT" d'une activite
  // Type(s)    : CATIModelEvents
  // Father Object    : l activite a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyCalculatedCycleTime,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "CCT" d'une activite
  // Type(s)    : CATIModelEvents
  // Father Object    : l activite a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  /***************************************************************************/
  /*      GESTION DES ACTIVITES DYNAMIQUES ( GANTT )                         */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_DeleteActivity,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression d'une activite dynamique.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite que l'on veut supprimer.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateChild,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'une activite fille a une activite dynamique.
  // Type(s)    : CATIModelEvents, CATIRedrawEvent
  // Father Object    : Activite mere a qui on ajoute un enfant.
  // Son Object : L'activite fille.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteChild,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression d'une enfant a une activite dynamique.
  // Type(s)    : CATIModelEvents
  // Father Object    : L'activite mere dont on supprime un enfant.
  // Son Object : Neant.
  // --------------------------------------------------------------------------



  /***************************************************************************/
  /*      GESTION DES POSITIONS                                               */
  /*                 --->  OFFICIELLEMENT A PARTIR DE LA CXR5 !!!            */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_CreatePosition,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour du navigateur apres l'ajout d'une Position.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le CATISpecObject ( en general une activite ) auquel est
  //              rattachee la Position.
  // Son Object : L'element Position cree.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeletePosition,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour du navigateur apres la suppression d'une
  //              Position.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le CATISpecObject ( en general une activite ) auquel est
  //              rattachee la Position.
  // Son Object : Neant.
  // --------------------------------------------------------------------------



  /***************************************************************************/
  /*      GESTION DES ITEMS ET RESOURCES                                     */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_AddContext,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour apres ajout d'un contexte ( de type Product
  //              ou Resource ).
  //              C'est-a-dire importer un Objet dans une des deux listes
  //              ProductList ou ResourceList de l'arbre PPR.
  // Type(s)    : CATIRedrawEvent
  // Father Object: CATISPPContainer handler on the root container
  // Son Object : the object added to the context if we know it 
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_RemoveContext,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour apres suppression d'un contexte ( de type
  //              Product ou Resource ).
  //              C'est-a-dire supprimer un Objet dans une des deux listes
  //              ProductList ou ResourceList de l'arbre PPR.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le CATISPPContainer auquel on supprime ce contexte.
  // Son Object : the object removed from the context if we know it
  // --------------------------------------------------------------------------

  


  // --------------------------------------------------------------------------
  SPP_CreateResource,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'une ressource a une activite.
  // Type(s)    : CATIModelEvents, CATIRedrawEvent
  // Father Object    : L'activite a laquelle on ajoute la ressource.
  // Son Object : La ressource a ajouter.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteResource,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression des ressources d'une activite.
  // Type(s)    : CATIModelEvents
  // Father Object    : L'activite dont on supprime les ressources.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateItem,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour du navigateur apres l'ajout d'un Item.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : L'activite a laquelle est rattachee l'Item.
  // Son Object : L'element Item.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteItem,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour du navigateur apres la suppression d'un Item.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : L'activite a laquelle est rattachee l'Item.
  // Son Object : Neant.
  // --------------------------------------------------------------------------


  /***************************************************************************/
  /*      GESTION DES TEMPS DE CYCLE ( MODELE DYNAMIQUE )                    */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_ModifyBegin,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "Begin" d'une activite dynamique.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite dynamique a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------
  
  // --------------------------------------------------------------------------
  SPP_ModifyCycleTime,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "CycleTime" d'une activite
  //              dynamique.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite dynamique a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyEnd,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification du parametre "End" d'une activite dynamique.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite dynamique a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyCondition,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ne fait rien pour l'instant, mais servira a PCM pour les
  //              changements du parametre "Condition".
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite dynamique a modifier.
  // Son Object : Neant.
  // --------------------------------------------------------------------------



  /***************************************************************************/
  /*      GESTION DES LIBRAIRIES D'ACTIVITES ( .ACT )                        */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_ModifyLibrary,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour de la toolbar lors d'une modification de
  //              library d'activites ( .act ).
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le RootContainer ( de type CATISPPContainer) du document.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateSubType,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour lors de la creation d'un sous-type d'activite
  //              dans la librairie.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le Container de l'activite mere.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteSubType,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour lors de la suppression d'un sous-type d'activite
  //              dans la librairie.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le Container de l'activite a supprimer.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateAttribute,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour lors de la creation d'un attriGoal dans
  //              la librairie.
  // Type(s)    : CATIRedrawEvent
  // Father Object    : L'activite a laquelle on a associe l'AttriGoal.
  // Son Object : Neant.
  // --------------------------------------------------------------------------



  /***************************************************************************/
  /*      GESTION DES LIENS : ARCS, CONNECTORS, NODES                        */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_AddChildActivity,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout complet ( node, connectors ) d'un enfant.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite fille a ajouter.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyChildActivity, 
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification complete ( node, connectors, flows ) d'un
  //              enfant.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite fille a modifier.
  // Son Object : Neant.
  //
  // Remarque   : Utilise dans la methode UpdateGE qu'il faudrait reecrire.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_RemoveChildActivity,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression complete ( node, connectors, flows ) d'un enfant.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite fille ( ou ControlFlow ou ControlIO ) a supprimer.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateControlFlow,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'un arc de type "ControlFlow".
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite a partir de laquelle va etre ajoute l'arc.
  // Son Object : Arc ( type CATISpecObject, SU = "ControlFlow" ) a ajouter.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteControlFlow,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression d'un arc de type "ControlFlow".
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite a partir de laquelle va etre supprime l'arc.
  // Son Object : Arc ( type CATISpecObject, SU = "ControlFlow" ) a supprimer.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateProductFlow,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'un arc de type "ProductFlow".
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite a partir de laquelle va etre ajoute l'arc.
  // Son Object : Arc ( type CATISpecObject, SU = "ProductFlow" ) a ajouter.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteProductFlow,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression d'un arc de type "ProductFlow".
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite a partir de laquelle va etre supprime l'arc.
  // Son Object : Arc ( type CATISpecObject, SU = "ProductFlow" ) a supprimer.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateConnectorInput,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'un connecteur d'entree.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite sur laquelle on ajoute le connecteur.
  // Son Object : Connecteur ( type CATISpecObject, SU = "ControlInput" ) a
  //              ajouter.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateConnectorOutput,
  // --------------------------------------------------------------------------
  //
  // Goal        : Ajout d'un connecteur de sortie.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite sur laquelle on ajoute le connecteur.
  // Son Object : Connecteur ( type CATISpecObject, SU = "ControlOutput" ) a
  //              ajouter.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_DeleteConnector,
  // --------------------------------------------------------------------------
  //
  // Goal        : Suppression d'un connecteur de sortie.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite a partir de laquelle va etre supprime le connecteur.
  // Son Object : Connecteur ( type CATISpecObject, SU = "ControlIO" ) a
  //              ajouter.
  //
  // Remarque   : Notification de bas niveau qu'il faudrait supprimer.
  //
  // --------------------------------------------------------------------------

 /***************************************************************************/
  /*      GESTION DU CONTAINER COMPOUNDCONT                                     */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_ModifyCompoundCont,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour de la visu apres creation ou destruction 
  //              container applicatif  
  // Type(s)    : CATIModelEvents         
  // Father Object    : le CompoundCont 
  // Son Object : Neant.
  // --------------------------------------------------------------------------


  /***************************************************************************/
  /*      AUTRES                                                             */
  /***************************************************************************/

  // --------------------------------------------------------------------------
  SPP_None,
  // --------------------------------------------------------------------------
  //
  // Goal        : Aucune action.
  // Type(s)    : Neant.
  // Father Object    : Neant.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  // Add CFO 14/11/2002 RI368302
  SPP_ModifyConnectorOutput,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification d'un connecteur de sortie.
  // Type(s)    : CATIModelEvents
  // Father Object    : Activite sur laquelle on ajoute le connecteur.
  // Son Object : Connecteur ( type CATISpecObject, SU = "ControlOutput" ) a
  //              ajouter.
  // --------------------------------------------------------------------------

  SPP_RemoveBrokenLink,
  // --------------------------------------------------------------------------
  //
  // Goal        : Remise a jour apres suppression d'un BrokenLink
  // Type(s)    : CATIRedrawEvent
  // Father Object    : Le CATISPPContainer auquel on supprime ce contexte.
  // Son Object : Neant.
  // --------------------------------------------------------------------------

  
  //---------------------------------------------------------------------------
  // Notifications used when creating/removing precedence relation between
  // two activities.
  //---------------------------------------------------------------------------
  SPP_CreatePrecedence,  
  SPP_DeletePrecedence,
  
  // --------------------------------------------------------------------------
  SPP_ModifyContext,
  // --------------------------------------------------------------------------
  //
  // Goal        : redraw an element of the Product List or the resource list
  //               used to redraw only one element during UndoRedo 
  //               It prevents the whole 3D scene to be regenerated (perfo)
  //               and we don t remove all 3D reps added by applications
  // Type(s)    : CATIRedrawEvent
  // Father Object : Le CATISPPContainer auquel on supprime ce contexte.
  // Son Object : the object modified to the context if we know it
  // --------------------------------------------------------------------------
  // --------------------------------------------------------------------------
  SPP_CreateStartStart,
  SPP_DeleteStartStart,
  // --------------------------------------------------------------------------
  //
  // Goal        : Notification used when creating/removing start-start relation
  //               between 2 activities. 
  //               Should be used for CATSPPExtendedNotification
  // Father Object  : Activity 1
  // Son Object     : Activity 2
  // --------------------------------------------------------------------------
  SPP_CreateEndEnd,
  SPP_DeleteEndEnd,
  // --------------------------------------------------------------------------
  //
  // Goal        : Notification used when creating/removing end-end relation
  //               between 2 activities. 
  //               Should be used for CATSPPExtendedNotification
  // Father Object  : Activity 1
  // Son Object     : Activity 2
  // --------------------------------------------------------------------------
  SPP_CreateResourceLink,
  SPP_DeleteResourceLink,
  // --------------------------------------------------------------------------
  //
  // Goal        : Notification used when creating/removing Resource Product flow relation
  //               between 2 behaviors owned by respective resources. 
  //               Should be used for CATSPPExtendedNotification
  // Father Object  : Behavior Activity 1
  // Son Object     : Behavior Activity 2
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_ModifyCalculatedBeginTime,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification notification for Caculated Begin Time
  // Type(s)    : CATIModelEvents
  // Father Object    : l Activity to be modified
  // Son Object : None.
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_CreateMultipleItems,
  SPP_DeleteMultipleItems,
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification notification when creating/removing activity
  //               specifications for multiple items
  // Type(s)     : CATIModelEvents
  // Father Object    : l Activity to be modified
  // Son Object : List of items
  // --------------------------------------------------------------------------

  // --------------------------------------------------------------------------
  SPP_TurnOnGeometry
  // --------------------------------------------------------------------------
  //
  // Goal        : Modification notification for View -> Geometry cmd
  // Type(s)    : 
  // Father Object    : None.
  // Son Object : None.
  // --------------------------------------------------------------------------
};

//=============================================================================


class ExportedBySP0BBOSM CATSPPActivityNotification : public CATNotification
{
  CATDeclareClass;
  
public:

  ////////////////////////////////////////////////////////////////
  //
  // Pour que la notification soit valide, deux conditions :
  //      - iNotifType doit etre different de None
  //      - iFatherObject doit etre non NULL
  //
  ////////////////////////////////////////////////////////////////

  // Constructeur, destructeur.
  CATSPPActivityNotification( SPPModifyKind iNotifType = SPP_None,
							 CATBaseUnknown* iFatherObject = NULL,
							 CATBaseUnknown* iSonObject = NULL );
  virtual ~CATSPPActivityNotification();
  
  // Type de la notification.
  SPPModifyKind GetNotificationKind(void);
  
  // Objets subissant la modification.
  CATBaseUnknown* GetFather(void);
  CATBaseUnknown* GetSon(void);


  // Parametres supplementaires.
  //////////////////////////////

/* // Inutiles.
   // Get and set the node level.
   void SetNodeLevel(const int &iNodeLevel);
   int GetNodeLevel() const;
*/

private:
  
  // Donnees generales.
  //////////////////////
  CATBaseUnknown *_FatherObject, *_SonObject;
  SPPModifyKind _NotifType;
  
/* Inutile.
  // Donnees specifiques au type de notification.
  ///////////////////////////////////////////////
  int _NodeLevel;
*/

}; // CATSPPActivityNotification

#endif
