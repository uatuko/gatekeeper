#pragma once

#include "basic_error.h"

namespace err {
using DatastorePgConnectionUnavailable = basic_error<"gk:1.0.5.503", "Unavailable">;
using DatastorePgTimeout               = basic_error<"gk:1.0.6.503", "Operation timed out">;

using DatastoreRedisCommandError          = basic_error<"gk:1.0.4.503", "Unavailable">;
using DatastoreRedisConnectionFailure     = basic_error<"gk:1.0.1.503", "Unavailable">;
using DatastoreRedisConnectionUnavailable = basic_error<"gk:1.0.3.503", "Unavailable">;
using DatastoreRedisTimeout               = basic_error<"gk:1.0.2.503", "Operation timed out">;

using DatastoreRevisionMismatch = basic_error<"gk:1.1.1.409", "Revision mismatch">;

using DatastoreDuplicateIdentity   = basic_error<"gk:1.2.1.409", "Duplicate identity">;
using DatastoreIdentityNotFound    = basic_error<"gk:1.2.2.404", "Identity not found">;
using DatastoreInvalidIdentityData = basic_error<"gk:1.2.3.400", "Invalid identity data">;

using DatastoreInvalidCollectionOrMember =
	basic_error<"gk:1.3.1.400", "Invalid collection or member">;
using DatastoreDuplicateCollectionMember =
	basic_error<"gk:1.3.2.409", "Duplicate collection member">;
using DatastoreCollectionNotFound = basic_error<"gk:1.3.3.404", "Collection not found">;

using DatastoreRoleNotFound = basic_error<"gk:1.4.1.404", "Role not found">;

using DatastoreDuplicateAccessPolicyIdentity =
	basic_error<"gk:1.5.1.409", "Duplicate access policy identity">;
using DatastoreInvalidAccessPolicyOrIdentity =
	basic_error<"gk:1.5.2.400", "Invalid access policy or identity">;
using DatastoreDuplicateAccessPolicyCollection =
	basic_error<"gk:1.5.3.409", "Duplicate access policy collection">;
using DatastoreInvalidAccessPolicyOrCollection =
	basic_error<"gk:1.5.4.400", "Invalid access policy or collection">;
using DatastoreAccessPolicyNotFound = basic_error<"gk:1.5.5.404", "Access policy not found">;

using DatastoreDuplicateRbacPolicy = basic_error<"gk:1.6.1.409", "Duplicate rbac policy">;
using DatastoreRbacPolicyNotFound  = basic_error<"gk:1.6.2.404", "Rbac Policy not found">;
using DatastoreInvalidRbacPolicyOrPrincipal =
	basic_error<"gk:1.6.3.400", "Invalid rbac policy or principal">;
using DatastoreDuplicateRbacPolicyPrincipal =
	basic_error<"gk:1.6.4.409", "Duplicate rbac policy principal">;
using DatastoreInvalidRbacPolicyOrRole = basic_error<"gk:1.6.3.400", "Invalid rbac policy or role">;
using DatastoreDuplicateRbacPolicyRole = basic_error<"gk:1.6.4.409", "Duplicate rbac policy role">;

using DatastoreDuplicateRoleOrPermission =
	basic_error<"gk:1.7.1.409", "Duplicate role or permission">;
using DatastoreInvalidRoleOrPermission = basic_error<"gk:1.7.2.400", "Invalid role or permission">;
using DatastorePermissionNotFound      = basic_error<"gk:1.7.3.404", "Permission not found">;

using EventsPubsubTransportFailure = basic_error<"gk:2.1.1.503", "Unavailable">;
} // namespace err
