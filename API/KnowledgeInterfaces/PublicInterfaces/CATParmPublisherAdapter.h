#ifndef CATParmPublisherAdapter_H
#define CATParmPublisherAdapter_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U2 
 */

// Export Module 
#include "KnowledgeItf.h"

// inherit from
#include "CATBaseUnknown.h"

//Forwards
#include "CATICkeRelationForwards.h"


#include "CATIParmPublisher.h"
class CATIVisitor;



/**   
 * CAA Adapter to CATIParmPublisher Interface.
 * <b>Role</b>: This class should be derived to implement features extension to CATIParmPublisher.<br>
 * CATIParmPublisher is the interface used by Knowledgeware to have access to all the parameters<br>
 * and relations of a feature.<br>
 * It is also used on some objects to add user parameters and relations to features<br>
 * This default implementation uses an attribute of kind tk_list(tk_component) to store
 * relations and user parameters.<br>
 * You should override method returning the attribute key where those objects will be stored and appended.<br>
 * You can use this attribute to aggregate the own parameters of your feature<br>
 * or you can override GetAllChildren and GetDirectChildren to return your parameters<br>
 * @see CATIParmPublisher
 */
class ExportedByKnowledgeItf CATParmPublisherAdapter : public CATIParmPublisher
{
public:

   /** 
    * Constructs the extension.
    */ 
    CATParmPublisherAdapter();

   /** 
    * Deletes the extension.
    */ 
    virtual ~CATParmPublisherAdapter();


  //-------------------------------------------
  // Interface CATIParmPublisher implementation
  //-------------------------------------------

  /**
   * Appends a user parameter or a relation to this feature.
   * Default implementation does nothing.<br>
   * @param  iFeatureToAppend relation or parameter to append 
   */
   virtual void Append         (const CATISpecObject_var & iFeatureToAppend ) ;


  /**
   * Removes a user parameter or a relation from this feature.
   * Default implementation does nothing.<br>
   * @param  iFeatureToRemove relation or parameter to remove 
   */
   virtual void RemoveChild    (const CATISpecObject_var & iFeatureToRemove ) ;


  /**
   * Scan the direct children of this feature answering a given interface.<br>
   * Default implementation does nothing.<br>
   * Old method. Better use VisitChildren.
   * If you have your own parameters, you should override this method, ask for this method to get the direct 
   * children added by a user,<br>
   * and then add your own parameters to the list.<br>
   * @param  iIntfName name of the interface asked. 
   * @param  iList list where parameters and relations will be added 
   */
   virtual void GetDirectChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iList) ;

  /**
   * Scan all the children (recursive) of this feature answering a given interface.<br>
   * Default implementation does nothing.<br>
   * Old method. Better use visit children.
   * If you have your own parameters or components, you should override this method, ask for this method to get the direct 
   * children added by a user,<br>
   * and then add your own parameters to the list in a recursive manner.<br>
   * @param  iIntfName  name of the interface asked. 
   * @param  iList list where parameters and relations will be added 
   */
  virtual void GetAllChildren (CATClassId iIntfName,CATListValCATISpecObject_var &iList)  ;


  /**
   * Indicates if this publisher allow the use of Append (and RemoveChild) method.
   * It is mostly used to prevent those operations if the object implementing the
   * interface isn't able to manage it.
   * Default implementation is FALSE.
   * @return <b>Legal values</b>:
   * <tt>TRUE</tt> Append and Remove of objects are authorized
   * <tt>FALSE</tt> Append and Remove of objects are not authorized.
   */
  virtual boolean AllowUserAppend ( ) const ;

  /** 
   * This method has to return the associated container of the publisher.
   * It is used to create the user parameters when AllowUserAppend returns True.
   * In this case, you should implement this method.
   * Default implementation returns NULL.
   * @return The container
   */
  virtual CATIContainer_var GetContainer() ;

  /** 
  * This method is another one to browse publishers hierarchy (recursively or not). The choice of good instances is delegated to the given visitor 
  * (it can put good instances in a list, or keep only one, depending on the goal of the "visit").<br>
  * The default implementation doesn't handle new litterals (based on spec attributes). If you want your publisher to publish such litterals, you have to
  * overload this method. The principle is to visit each published instance and if the visit is recursive, to call VisitChildren on each instance implementing CATIParmPublisher. 
  * Remember that if the method Visit doesn't succeed, it means that the visit can end.
  */
  virtual void VisitChildren(CATIVisitor* iVisitor, const int recur = 0);


private:
 
  /**
   * @nodoc
   */
   CATParmPublisherAdapter(const CATParmPublisherAdapter&);
};


#endif
