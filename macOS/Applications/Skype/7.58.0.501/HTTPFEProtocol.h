//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSRecursiveLock;

@interface HTTPFEProtocol : NSURLProtocol
{
    BOOL _isStopped;
    NSRecursiveLock *_lock;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)registerHTTPFEProtocol;
+ (id)HTTPFEProtocolScheme;
+ (void)initialize;
@property(nonatomic) BOOL isStopped; // @synthesize isStopped=_isStopped;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (unsigned long long)cacheStoragePolicyForURL:(id)arg1 andMimeType:(id)arg2;
- (void)stopLoading;
- (void)startLoadingLocal;
- (void)startLoading;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

