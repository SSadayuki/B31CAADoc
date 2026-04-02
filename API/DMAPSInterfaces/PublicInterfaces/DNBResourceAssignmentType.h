// COPYRIGHT Dassault Systemes 2009
//===================================================================
//
// DNBResourceAssignmentType.h
// Automation enumeration for Process to Resource Assignment 
//      relation type
//
//===================================================================
//  Jul 2009  Creation: lhg
//===================================================================
#ifndef DNBResourceAssignmentType_h
#define DNBResourceAssignmentType_h

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

/*
 *  The 4 relations Process_Uses_Resource to Process_Manages_Resource_Visualization
 *  match CATISPPResourceManagement's CATSPPResourceLinkType,
 *  while the following 2 relations (Process_Attaches_Resource and 
 *  Process_Detaches_Resource) match CATISPPItemMgt's CATSPPAssignmentType
 */
enum DNBResourceAssignmentType
{
    Default_Process_Resource_Type,
    Process_Uses_Resource,
    Process_Runs_On_Resource,
    Process_Manages_Resource_Viewpoint,
    Process_Manages_Resource_Visualization,
    Process_Attaches_Resource,
    Process_Detaches_Resource
};

#endif
