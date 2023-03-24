// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service/datamanager/v1/data_manager.proto
#ifndef GRPC_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto__INCLUDED
#define GRPC_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto__INCLUDED

#include "service/datamanager/v1/data_manager.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace viam {
namespace service {
namespace datamanager {
namespace v1 {

// A DataManagerService service manages data between the robot and the cloud.
class DataManagerService final {
 public:
  static constexpr char const* service_full_name() {
    return "viam.service.datamanager.v1.DataManagerService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sync performs a sync of the non-synced files for the specified service name,
    virtual ::grpc::Status Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::viam::service::datamanager::v1::SyncResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>> AsyncSync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>>(AsyncSyncRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>> PrepareAsyncSync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>>(PrepareAsyncSyncRaw(context, request, cq));
    }
    // DoCommand sends/receives arbitrary commands
    virtual ::grpc::Status DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>> AsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>>(AsyncDoCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>> PrepareAsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>>(PrepareAsyncDoCommandRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Sync performs a sync of the non-synced files for the specified service name,
      virtual void Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // DoCommand sends/receives arbitrary commands
      virtual void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>* AsyncSyncRaw(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::service::datamanager::v1::SyncResponse>* PrepareAsyncSyncRaw(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>* AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>* PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::viam::service::datamanager::v1::SyncResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>> AsyncSync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>>(AsyncSyncRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>> PrepareAsyncSync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>>(PrepareAsyncSyncRaw(context, request, cq));
    }
    ::grpc::Status DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>> AsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>>(AsyncDoCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>> PrepareAsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>>(PrepareAsyncDoCommandRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response, std::function<void(::grpc::Status)>) override;
      void Sync(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) override;
      void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>* AsyncSyncRaw(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::viam::service::datamanager::v1::SyncResponse>* PrepareAsyncSyncRaw(::grpc::ClientContext* context, const ::viam::service::datamanager::v1::SyncRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Sync_;
    const ::grpc::internal::RpcMethod rpcmethod_DoCommand_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sync performs a sync of the non-synced files for the specified service name,
    virtual ::grpc::Status Sync(::grpc::ServerContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response);
    // DoCommand sends/receives arbitrary commands
    virtual ::grpc::Status DoCommand(::grpc::ServerContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Sync() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSync(::grpc::ServerContext* context, ::viam::service::datamanager::v1::SyncRequest* request, ::grpc::ServerAsyncResponseWriter< ::viam::service::datamanager::v1::SyncResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_DoCommand() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoCommand(::grpc::ServerContext* context, ::viam::common::v1::DoCommandRequest* request, ::grpc::ServerAsyncResponseWriter< ::viam::common::v1::DoCommandResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Sync<WithAsyncMethod_DoCommand<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Sync() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::viam::service::datamanager::v1::SyncRequest, ::viam::service::datamanager::v1::SyncResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::viam::service::datamanager::v1::SyncRequest* request, ::viam::service::datamanager::v1::SyncResponse* response) { return this->Sync(context, request, response); }));}
    void SetMessageAllocatorFor_Sync(
        ::grpc::MessageAllocator< ::viam::service::datamanager::v1::SyncRequest, ::viam::service::datamanager::v1::SyncResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::viam::service::datamanager::v1::SyncRequest, ::viam::service::datamanager::v1::SyncResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Sync(
      ::grpc::CallbackServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_DoCommand() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response) { return this->DoCommand(context, request, response); }));}
    void SetMessageAllocatorFor_DoCommand(
        ::grpc::MessageAllocator< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* DoCommand(
      ::grpc::CallbackServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Sync<WithCallbackMethod_DoCommand<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Sync() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_DoCommand() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Sync() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSync(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_DoCommand() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoCommand(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Sync() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Sync(context, request, response); }));
    }
    ~WithRawCallbackMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Sync(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_DoCommand() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->DoCommand(context, request, response); }));
    }
    ~WithRawCallbackMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* DoCommand(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Sync : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Sync() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::viam::service::datamanager::v1::SyncRequest, ::viam::service::datamanager::v1::SyncResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::viam::service::datamanager::v1::SyncRequest, ::viam::service::datamanager::v1::SyncResponse>* streamer) {
                       return this->StreamedSync(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Sync() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Sync(::grpc::ServerContext* /*context*/, const ::viam::service::datamanager::v1::SyncRequest* /*request*/, ::viam::service::datamanager::v1::SyncResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSync(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::viam::service::datamanager::v1::SyncRequest,::viam::service::datamanager::v1::SyncResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_DoCommand() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>* streamer) {
                       return this->StreamedDoCommand(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDoCommand(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::viam::common::v1::DoCommandRequest,::viam::common::v1::DoCommandResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Sync<WithStreamedUnaryMethod_DoCommand<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Sync<WithStreamedUnaryMethod_DoCommand<Service > > StreamedService;
};

}  // namespace v1
}  // namespace datamanager
}  // namespace service
}  // namespace viam


#endif  // GRPC_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto__INCLUDED
