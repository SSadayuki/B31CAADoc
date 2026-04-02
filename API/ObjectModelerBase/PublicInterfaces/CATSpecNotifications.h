/* -*-c++-*- */
#ifndef _CATSPECNOTIFICATIONS_H
#define _CATSPECNOTIFICATIONS_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "AD0XXBAS.h"

#include "CATNotification.h"
#include "CATBaseUnknown.h"
class CATListValCATBaseUnknown_var;


/**
 * Notification class for feature modeler.
 * <b> role: </b> Used to notify events.
 * @see CATISpecEvents, CATNotification
 */
class ExportedByAD0XXBAS CATSpecNotification : public CATNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATSpecNotification.
   */
  CATSpecNotification();

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATSpecNotification(const CATSpecNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATSpecNotification & operator=(const CATSpecNotification & iNotification);

  virtual ~CATSpecNotification();

  /**
   * Returns the impacted object (created, modified or deleted according to the notification type).
   */
  CATBaseUnknown_var GetObject() const;

  /**
   * Build step by step the list of objects concerned by the notification.
   * <b> note: </b> There is no default implementation to build all that path.
   * @param iObj
   *   Object concerned by the notification.
   */
  void FeedPath(const CATBaseUnknown_var & iObj);

  /**
   * Returns the path constructed by FeedPath.
   */
  CATListValCATBaseUnknown_var * GivePath();

protected :
  /** @nodoc */
  virtual void BuildInitialPath();
  CATBaseUnknown_var _obj;
  CATListValCATBaseUnknown_var * _path;
};


/**
 * Notification class for feature creation.
 * <b> role: </b> Used to notify feature creation events.
 * @see CATISpecEvents, CATSpecNotification
 */
class ExportedByAD0XXBAS CATCreationNotification : public CATSpecNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATCreationNotification from an object.
   */
  CATCreationNotification(const CATBaseUnknown_var& obj);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATCreationNotification(const CATCreationNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATCreationNotification & operator=(const CATCreationNotification & iNotification);

  virtual ~CATCreationNotification();
};


/**
 * Notification class for feature deletion.
 * <b> role: </b> Used to notify feature deletion events.
 * @see CATISpecEvents, CATSpecNotification
 */
class ExportedByAD0XXBAS CATDeleteNotification : public CATSpecNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
  * Constructs a CATDeleteNotification from an object.
  */
  CATDeleteNotification(const CATBaseUnknown_var& obj);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATDeleteNotification(const CATDeleteNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATDeleteNotification & operator=(const CATDeleteNotification & iNotification);

  virtual ~CATDeleteNotification();
};


/**
 * Notification class for feature modification.
 */
class ExportedByAD0XXBAS CATModifNotification : public CATSpecNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /** @nodoc */
  CATModifNotification(const CATBaseUnknown_var & obj);

  /** @nodoc */
  CATModifNotification(const CATModifNotification & iNotification);

  /** @nodoc */
  CATModifNotification & operator=(const CATModifNotification & iNotification);

  /** @nodoc */
  virtual ~CATModifNotification();

protected :
  /** @nodoc */
  virtual void BuildInitialPath();
};


/**
 * Notification class for feature modification.
 */
class ExportedByAD0XXBAS CATCompoNotification : public CATModifNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /** @nodoc */
  CATCompoNotification(const CATBaseUnknown_var& obj);

  /** @nodoc */
  CATCompoNotification(const CATCompoNotification & iNotification);

  /** @nodoc */
  CATCompoNotification & operator=(const CATCompoNotification & iNotification);

  /** @nodoc */
  virtual ~CATCompoNotification();
};


/**
 * Notification class for feature's data modification ( name, userId ).
 * <b> role: </b> Used to notify feature deletion events.
 * @see CATISpecEvents, CATSpecNotification
 */
class ExportedByAD0XXBAS CATCompoValNotification : public CATCompoNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATCompoValNotification from an object.
   */
  CATCompoValNotification(const CATBaseUnknown_var& obj);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATCompoValNotification(const CATCompoValNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATCompoValNotification & operator=(const CATCompoValNotification & iNotification);

  virtual ~CATCompoValNotification();
};


/**
 * @nodoc
 */
class ExportedByAD0XXBAS CATCompoStructNotification : public CATCompoNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  CATCompoStructNotification(const CATBaseUnknown_var& obj);
  CATCompoStructNotification(const CATCompoStructNotification & iNotification);
  CATCompoStructNotification & operator=(const CATCompoStructNotification & iNotification);
  virtual ~CATCompoStructNotification();
};


/**
 * @nodoc
 */
class ExportedByAD0XXBAS CATCompoStructAddNotification : public CATCompoStructNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  CATCompoStructAddNotification(const CATBaseUnknown_var& obj);
  CATCompoStructAddNotification(const CATCompoStructAddNotification & iNotification);
  CATCompoStructAddNotification & operator=(const CATCompoStructAddNotification & iNotification);
  virtual ~CATCompoStructAddNotification();
};


/**
 * @nodoc
 */
class ExportedByAD0XXBAS CATCompoStructRemoveNotification : public CATCompoStructNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  CATCompoStructRemoveNotification(const CATBaseUnknown_var& obj);
  CATCompoStructRemoveNotification(const CATCompoStructRemoveNotification & iNotification);
  CATCompoStructRemoveNotification & operator=(const CATCompoStructRemoveNotification & iNotification);
  virtual ~CATCompoStructRemoveNotification();
};


/**
 * Notification class for feature's synchronisation.
 * @see CATISpecEvents, CATModifNotification
 */
class ExportedByAD0XXBAS CATAttrNotification : public CATModifNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATAttrNotification from an attribute.
   */
  CATAttrNotification(const CATBaseUnknown_var& attr);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATAttrNotification(const CATAttrNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATAttrNotification & operator=(const CATAttrNotification & iNotification);

  virtual ~CATAttrNotification();

  /**
   * Returns the concerned attribute.
   */
  CATBaseUnknown_var GetAttribute() const;
};


/**
 * Notification class for attribute's value modification.
 * @see CATISpecEvents, CATAttrNotification
 */
class ExportedByAD0XXBAS CATAttrValNotification : public CATAttrNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATAttrValNotification from an attribute.
   */
  CATAttrValNotification(const CATBaseUnknown_var& attr);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATAttrValNotification(const CATAttrValNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATAttrValNotification & operator=(const CATAttrValNotification & iNotification);

  virtual ~CATAttrValNotification();
};


/**
 * Notification class for add/remove of attributes on a feature.
 * @see CATISpecEvents, CATAttrNotification
 */
class ExportedByAD0XXBAS CATAttrStructNotification : public CATAttrNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  /**
   * Constructs a CATAttrStructNotification from an attribute.
   */
  CATAttrStructNotification(const CATBaseUnknown_var& attr);

  /**
   * Copy constructor.
   * @param iNotification
   *   The notification to copy
   */
  CATAttrStructNotification(const CATAttrStructNotification & iNotification);

  /**
   * Assignment operator from a notification instance.
   * @param iNotification
   *   The provided notification
   * @return
   *   The notification resulting from the assignment
   */
  CATAttrStructNotification & operator=(const CATAttrStructNotification & iNotification);

  virtual ~CATAttrStructNotification();
};


/**
 * @nodoc
 */
class ExportedByAD0XXBAS CATAttrStructAddNotification : public CATAttrStructNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  CATAttrStructAddNotification(const CATBaseUnknown_var & attr);
  CATAttrStructAddNotification(const CATAttrStructAddNotification & iNotification);
  CATAttrStructAddNotification & operator=(const CATAttrStructAddNotification & iNotification);
  virtual ~CATAttrStructAddNotification();
};


/**
 * @nodoc
 */
class ExportedByAD0XXBAS CATAttrStructRemoveNotification : public CATAttrStructNotification
{
  /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
  CATDeclareClass;

public:
  CATAttrStructRemoveNotification(const CATBaseUnknown_var & attr);
  CATAttrStructRemoveNotification(const CATAttrStructRemoveNotification & iNotification);
  CATAttrStructRemoveNotification & operator=(const CATAttrStructRemoveNotification & iNotification);
  virtual ~CATAttrStructRemoveNotification();
};


#endif
