#pragma once

#include "datastore/access-policies.h"
#include "datastore/collections.h"
#include "datastore/identities.h"
#include "datastore/rbac-policies.h"
#include "datastore/roles.h"
#include "gk/v1/gatekeeper.grpc.pb.h"

namespace service {
datastore::AccessPolicy map(const gk::v1::CreateAccessPolicyRequest *from);
datastore::Collection   map(const gk::v1::CreateCollectionRequest *from);
datastore::Identity     map(const gk::v1::CreateIdentityRequest *from);
datastore::RbacPolicy   map(const gk::v1::CreateRbacPolicyRequest *from);
datastore::Role         map(const gk::v1::CreateRoleRequest *from);

void map(const datastore::AccessPolicy &from, gk::v1::AccessPolicy *to);
void map(const datastore::AccessPolicy &from, gk::v1::Policy *to);
void map(const datastore::AccessPolicies &from, gk::v1::CheckAccessResponse *to);
void map(const datastore::Collection &from, gk::v1::Collection *to);
void map(const datastore::Identity &from, gk::v1::Identity *to);
void map(const datastore::RbacPolicy &from, gk::v1::RbacPolicy *to);
void map(const datastore::Role &from, gk::v1::Role *to);
} // namespace service
