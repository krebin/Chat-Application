// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: chatserver.proto

#include "chatserver.pb.h"
#include "chatserver.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace chatserver {

static const char* ChatServer_method_names[] = {
  "/chatserver.ChatServer/LogIn",
  "/chatserver.ChatServer/LogOut",
  "/chatserver.ChatServer/SendMessage",
  "/chatserver.ChatServer/ReceiveMessage",
  "/chatserver.ChatServer/List",
  "/chatserver.ChatServer/Chat",
};

std::unique_ptr< ChatServer::Stub> ChatServer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ChatServer::Stub> stub(new ChatServer::Stub(channel));
  return stub;
}

ChatServer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_LogIn_(ChatServer_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LogOut_(ChatServer_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendMessage_(ChatServer_method_names[2], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_ReceiveMessage_(ChatServer_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_List_(ChatServer_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Chat_(ChatServer_method_names[5], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status ChatServer::Stub::LogIn(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::chatserver::LogInReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_LogIn_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::chatserver::LogInReply>* ChatServer::Stub::AsyncLogInRaw(::grpc::ClientContext* context, const ::chatserver::LogInRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::chatserver::LogInReply>(channel_.get(), cq, rpcmethod_LogIn_, context, request);
}

::grpc::Status ChatServer::Stub::LogOut(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::chatserver::LogOutReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_LogOut_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::chatserver::LogOutReply>* ChatServer::Stub::AsyncLogOutRaw(::grpc::ClientContext* context, const ::chatserver::LogOutRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::chatserver::LogOutReply>(channel_.get(), cq, rpcmethod_LogOut_, context, request);
}

::grpc::ClientReaderWriter< ::chatserver::SendMessageRequest, ::chatserver::SendMessageReply>* ChatServer::Stub::SendMessageRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::chatserver::SendMessageRequest, ::chatserver::SendMessageReply>(channel_.get(), rpcmethod_SendMessage_, context);
}

::grpc::ClientAsyncReaderWriter< ::chatserver::SendMessageRequest, ::chatserver::SendMessageReply>* ChatServer::Stub::AsyncSendMessageRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::chatserver::SendMessageRequest, ::chatserver::SendMessageReply>(channel_.get(), cq, rpcmethod_SendMessage_, context, tag);
}

::grpc::Status ChatServer::Stub::ReceiveMessage(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::chatserver::ReceiveMessageReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ReceiveMessage_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::chatserver::ReceiveMessageReply>* ChatServer::Stub::AsyncReceiveMessageRaw(::grpc::ClientContext* context, const ::chatserver::ReceiveMessageRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::chatserver::ReceiveMessageReply>(channel_.get(), cq, rpcmethod_ReceiveMessage_, context, request);
}

::grpc::Status ChatServer::Stub::List(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::chatserver::ListReply* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_List_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::chatserver::ListReply>* ChatServer::Stub::AsyncListRaw(::grpc::ClientContext* context, const ::chatserver::ListRequest& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::chatserver::ListReply>(channel_.get(), cq, rpcmethod_List_, context, request);
}

::grpc::ClientReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* ChatServer::Stub::ChatRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>(channel_.get(), rpcmethod_Chat_, context);
}

::grpc::ClientAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* ChatServer::Stub::AsyncChatRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>(channel_.get(), cq, rpcmethod_Chat_, context, tag);
}

ChatServer::Service::Service() {
  (void)ChatServer_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ChatServer::Service, ::chatserver::LogInRequest, ::chatserver::LogInReply>(
          std::mem_fn(&ChatServer::Service::LogIn), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ChatServer::Service, ::chatserver::LogOutRequest, ::chatserver::LogOutReply>(
          std::mem_fn(&ChatServer::Service::LogOut), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[2],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< ChatServer::Service, ::chatserver::SendMessageRequest, ::chatserver::SendMessageReply>(
          std::mem_fn(&ChatServer::Service::SendMessage), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ChatServer::Service, ::chatserver::ReceiveMessageRequest, ::chatserver::ReceiveMessageReply>(
          std::mem_fn(&ChatServer::Service::ReceiveMessage), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ChatServer::Service, ::chatserver::ListRequest, ::chatserver::ListReply>(
          std::mem_fn(&ChatServer::Service::List), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ChatServer_method_names[5],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< ChatServer::Service, ::chatserver::ChatMessage, ::chatserver::ChatMessage>(
          std::mem_fn(&ChatServer::Service::Chat), this)));
}

ChatServer::Service::~Service() {
}

::grpc::Status ChatServer::Service::LogIn(::grpc::ServerContext* context, const ::chatserver::LogInRequest* request, ::chatserver::LogInReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ChatServer::Service::LogOut(::grpc::ServerContext* context, const ::chatserver::LogOutRequest* request, ::chatserver::LogOutReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ChatServer::Service::SendMessage(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::chatserver::SendMessageReply, ::chatserver::SendMessageRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ChatServer::Service::ReceiveMessage(::grpc::ServerContext* context, const ::chatserver::ReceiveMessageRequest* request, ::chatserver::ReceiveMessageReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ChatServer::Service::List(::grpc::ServerContext* context, const ::chatserver::ListRequest* request, ::chatserver::ListReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ChatServer::Service::Chat(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::chatserver::ChatMessage, ::chatserver::ChatMessage>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace chatserver

