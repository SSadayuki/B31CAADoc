/* -*-C++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003
//===============================================================
// Class ENOVICfgPlug
//---------------------------------------------------------------
//  Dec 2003	Creation	RDR
//===============================================================

#ifndef  ENOVGenericLink_H
#define  ENOVGenericLink_H

#include "GUIDVPMInterfaces.h"


/**
* @CAA2Required
*/

class ExportedByGUIDVPMInterfaces ENOVGenericLink {


	public:

		/**
		* @nodoc
		*/
		enum LinkType {TechPachLink=1,DocLink=2};

		/**
		* @nodoc
		*/
		enum SecondaryLinkType { All=-1,Owner=1,Reference=2};

};

#endif

