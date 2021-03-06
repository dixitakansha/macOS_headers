//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSProgressReporting-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskMetrics;
@protocol NSURLSessionAppleIDContext, OS_dispatch_queue, SZExtractor;

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting>
{
    BOOL __extractorFinishedDecoding;
    BOOL __extractorPreparedForExtraction;
    float _priority;
    double __loadingPriority;
    double __timeoutIntervalForResource;
}

+ (id)taskForWrappedRequest:(id)arg1;
@property double _timeoutIntervalForResource; // @synthesize _timeoutIntervalForResource=__timeoutIntervalForResource;
@property double _loadingPriority; // @synthesize _loadingPriority=__loadingPriority;
@property BOOL _extractorPreparedForExtraction; // @synthesize _extractorPreparedForExtraction=__extractorPreparedForExtraction;
@property BOOL _extractorFinishedDecoding; // @synthesize _extractorFinishedDecoding=__extractorFinishedDecoding;
@property float priority; // @synthesize priority=_priority;
- (void)set_TLSNegotiatedCipherSuite:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL _isAVAssetTask; // @dynamic _isAVAssetTask;
- (void)_consumePendingBytesReceivedEncoded;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)_finishProgressReporting;
- (void)_completeUploadProgress;
- (id)_transactionMetrics;
- (void)_prepareNewTimingDataContainer;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCurrentRequest:(id)arg1;
- (id)_loggableDescription;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (long long)computeAdjustedPoolPriority;
- (void)_onqueue_releasePowerAsssertion;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (id)initWithTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;

// Remaining properties
@property(copy) NSDictionary *_DuetActivityProperties; // @dynamic _DuetActivityProperties;
@property(copy) NSData *_TCPConnectionMetadata; // @dynamic _TCPConnectionMetadata;
@property(readonly) unsigned int _TLSNegotiatedCipherSuite; // @dynamic _TLSNegotiatedCipherSuite;
@property unsigned long long _allowedProtocolTypes; // @dynamic _allowedProtocolTypes;
@property BOOL _allowsCellular; // @dynamic _allowsCellular;
@property(nonatomic) BOOL _allowsQUIC; // @dynamic _allowsQUIC;
@property(copy, setter=_setAppleIDContext:) id <NSURLSessionAppleIDContext> _appleIDContext; // @dynamic _appleIDContext;
@property BOOL _authenticatorConfiguredViaTaskProperty; // @dynamic _authenticatorConfiguredViaTaskProperty;
@property(retain, nonatomic) NSURL *_backgroundPublishingURL; // @dynamic _backgroundPublishingURL;
@property(copy, nonatomic) NSDictionary *_backgroundTaskTimingData; // @dynamic _backgroundTaskTimingData;
@property(copy) NSString *_boundInterfaceIdentifier; // @dynamic _boundInterfaceIdentifier;
@property long long _bytesPerSecondLimit; // @dynamic _bytesPerSecondLimit;
@property BOOL _cacheOnly; // @dynamic _cacheOnly;
@property int _cachePolicy; // @dynamic _cachePolicy;
@property(retain) struct _CFURLCache *_cfCache; // @dynamic _cfCache;
@property(retain) struct OpaqueCFHTTPCookieStorage *_cfCookies; // @dynamic _cfCookies;
@property(retain) struct _CFURLCredentialStorage *_cfCreds; // @dynamic _cfCreds;
@property(retain) struct _CFHSTSPolicy *_cfHSTS; // @dynamic _cfHSTS;
@property(setter=_setConnectionIsCellular:) BOOL _connectionIsCellular; // @dynamic _connectionIsCellular;
@property(copy) NSArray *_contentDispositionFallbackArray; // @dynamic _contentDispositionFallbackArray;
@property int _cookieAcceptPolicy; // @dynamic _cookieAcceptPolicy;
@property long long _countOfBytesReceivedEncoded; // @dynamic _countOfBytesReceivedEncoded;
@property long long _countOfPendingBytesReceivedEncoded; // @dynamic _countOfPendingBytesReceivedEncoded;
@property(retain) struct _CFURLRequest *_currentCFURLRequest; // @dynamic _currentCFURLRequest;
@property unsigned int _darkWakePowerAssertion; // @dynamic _darkWakePowerAssertion;
@property(retain, nonatomic) NSDictionary *_dependencyInfo; // @dynamic _dependencyInfo;
@property BOOL _disallowCellular; // @dynamic _disallowCellular;
@property(nonatomic) BOOL _doesSZExtractorConsumeExtractedData; // @dynamic _doesSZExtractorConsumeExtractedData;
@property long long _expectedWorkload; // @dynamic _expectedWorkload;
@property(retain, nonatomic, setter=set_extractor:) id <SZExtractor> _extractor; // @dynamic _extractor;
@property(nonatomic) BOOL _hasSZExtractor; // @dynamic _hasSZExtractor;
@property(retain, nonatomic) NSURLSessionTaskMetrics *_incompleteTaskMetrics; // @dynamic _incompleteTaskMetrics;
@property(copy) NSURL *_ledBellyFallbackURL; // @dynamic _ledBellyFallbackURL;
@property(copy) NSString *_ledBellyServiceIdentifier; // @dynamic _ledBellyServiceIdentifier;
@property(copy) NSDictionary *_legacySocketStreamProperties; // @dynamic _legacySocketStreamProperties;
@property double _loadingPriorityValue; // @dynamic _loadingPriorityValue;
@property int _networkServiceType; // @dynamic _networkServiceType;
@property(copy) NSString *_pathToDownloadTaskFile; // @dynamic _pathToDownloadTaskFile;
@property(retain, nonatomic) struct __PerformanceTiming *_performanceTiming; // @dynamic _performanceTiming;
@property unsigned int _powerAssertion; // @dynamic _powerAssertion;
@property(nonatomic) BOOL _preconnect; // @dynamic _preconnect;
@property BOOL _preventsIdleSystemSleep; // @dynamic _preventsIdleSystemSleep;
@property BOOL _preventsSystemHTTPProxyAuthentication; // @dynamic _preventsSystemHTTPProxyAuthentication;
@property long long _priority; // @dynamic _priority;
@property long long _priorityValue; // @dynamic _priorityValue;
@property BOOL _prohibitAuthUI; // @dynamic _prohibitAuthUI;
@property(nonatomic) id _protocolForTask; // @dynamic _protocolForTask;
@property(copy) NSDictionary *_proxySettings; // @dynamic _proxySettings;
@property(retain, nonatomic) NSURL *_publishingURL; // @dynamic _publishingURL;
@property long long _requestPriority; // @dynamic _requestPriority;
@property BOOL _shouldHandleCookies; // @dynamic _shouldHandleCookies;
@property BOOL _shouldPipelineHTTP; // @dynamic _shouldPipelineHTTP;
@property(nonatomic) BOOL _shouldReportTimingDataToAWD; // @dynamic _shouldReportTimingDataToAWD;
@property BOOL _shouldSkipPipelineProbe; // @dynamic _shouldSkipPipelineProbe;
@property BOOL _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property BOOL _shouldUsePipelineHeuristics; // @dynamic _shouldUsePipelineHeuristics;
@property(copy) NSDictionary *_sslSettings; // @dynamic _sslSettings;
@property(copy) NSString *_storagePartitionIdentifier; // @dynamic _storagePartitionIdentifier;
@property BOOL _strictContentLength; // @dynamic _strictContentLength;
@property long long _suspensionThreshhold; // @dynamic _suspensionThreshhold;
@property double _timeWindowDelay; // @dynamic _timeWindowDelay;
@property double _timeWindowDuration; // @dynamic _timeWindowDuration;
@property double _timeoutInterval; // @dynamic _timeoutInterval;
@property(retain, nonatomic) NSDictionary *_trailers; // @dynamic _trailers;
@property(copy) NSString *_uniqueIdentifier; // @dynamic _uniqueIdentifier;
@property(copy) NSURLSessionTaskHTTPAuthenticator *authenticator; // @dynamic authenticator;
@property long long countOfBytesClientExpectsToReceive; // @dynamic countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend; // @dynamic countOfBytesClientExpectsToSend;
@property long long countOfBytesExpectedToReceive; // @dynamic countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @dynamic countOfBytesExpectedToSend;
@property long long countOfBytesReceived; // @dynamic countOfBytesReceived;
@property long long countOfBytesSent; // @dynamic countOfBytesSent;
@property(copy) NSURLRequest *currentRequest; // @dynamic currentRequest;
@property(readonly, retain) NSURL *currentRequest_URL; // @dynamic currentRequest_URL;
@property(readonly, retain) NSURL *currentRequest_mainDocumentURL; // @dynamic currentRequest_mainDocumentURL;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSURLSessionTaskDependencyTree *dependencyTree; // @dynamic dependencyTree;
@property(readonly, copy) NSString *description;
@property(copy) NSDate *earliestBeginDate; // @dynamic earliestBeginDate;
@property(copy) NSError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(copy) NSURLRequest *originalRequest; // @dynamic originalRequest;
@property(readonly) NSProgress *progress; // @dynamic progress;
@property(copy) NSURLResponse *response; // @dynamic response;
@property(retain) NSURLSession *session; // @dynamic session;
@property double startTime; // @dynamic startTime;
@property long long state; // @dynamic state;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSURLSessionTaskDependency *taskDependency; // @dynamic taskDependency;
@property(copy) NSString *taskDescription; // @dynamic taskDescription;
@property unsigned long long taskIdentifier; // @dynamic taskIdentifier;
@property(readonly, retain) NSObject<OS_dispatch_queue> *workQueue; // @dynamic workQueue;

@end

