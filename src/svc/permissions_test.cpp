#include <grpcpp/test/default_reactor_test_peer.h>
#include <gtest/gtest.h>

#include "datastore/permissions.h"
#include "datastore/testing.h"

#include "permissions.h"

class svc_PermissionsTest : public testing::Test {
protected:
	static void SetUpTestSuite() {
		datastore::testing::setup();

		// Clear data
		datastore::pg::exec("truncate table permissions cascade;");
	}

	static void TearDownTestSuite() { datastore::testing::teardown(); }
};

TEST_F(svc_PermissionsTest, Create) {
	svc::Permissions svc;

	// Success: create permission
	{
		grpc::CallbackServerContext           ctx;
		grpc::testing::DefaultReactorTestPeer peer(&ctx);
		gk::v1::Permission                    response;

		gk::v1::PermissionsCreateRequest request;
		request.set_id("id:svc_PermissionsTest.Create");

		auto reactor = svc.Create(&ctx, &request, &response);
		EXPECT_TRUE(peer.test_status_set());
		EXPECT_TRUE(peer.test_status().ok());
		EXPECT_EQ(peer.reactor(), reactor);

		EXPECT_EQ(request.id(), response.id());
	}
}
