#ifndef CATIMSHGroup_h
#define CATIMSHGroup_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATMSHElement;
class CATMSHNode;

extern ExportedByMSHModel IID IID_CATIMSHGroup;

/**
 * Interface representing group of finite elements or finite elements nodes.
 * <b>Role</b>: <b>Groups</b> should be used for selection and hiligth purpose only.
 * <br><b>Groups</b> are created by the <b>Mesh</b> (see @href CATIMSHMesh#CreateGroup methods).
 * <br>A <b>Groups</b> have no persistence and are not updated due to nodes or elements deletion.
 */
class ExportedByMSHModel CATIMSHGroup: public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the number of finite elements belonging to the <b>Group</b>.
   */
  virtual int GetNumberOfElements () = 0;
  /**
   * Retreives the list of finite elements belonging to the <b>Group</b>.
   * @param oElements
   *   Array containing pointers on all elements belonging to the <b>Group</b>.
	 * @return
   *   The number of finite elements belonging to <b>Group</b>.
   */
  virtual int GetElements ( CATMSHElement ** &oElements ) = 0;
  /**
   * Returns the number of finite elements nodes belonging to the <b>Group</b>.
   */
  virtual int GetNumberOfNodes () = 0;
  /**
   * Retreives the list of finite elements nodes belonging to the <b>Group</b>.
   * @param oNodes
   *   Array containing pointers on all nodes belonging to the <b>Group</b>.
	 * @return
   *   The number of finite elements nodes belonging to <b>Group</b>.
   */
  virtual int GetNodes ( CATMSHNode ** &oNodes ) = 0;
};

CATDeclareHandler ( CATIMSHGroup , CATBaseUnknown );

#endif
