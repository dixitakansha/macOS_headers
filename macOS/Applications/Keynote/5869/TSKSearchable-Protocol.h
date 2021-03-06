//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKModel-Protocol.h"

@class NSObject, NSString, TSKCommand, TSKSearch;
@protocol TSKSearchCanvasDelegate, TSKSearchReplaceProvider;

@protocol TSKSearchable <TSKModel>

@optional
- (TSKCommand *)commandForReplaceAllWithProvider:(NSObject<TSKSearchReplaceProvider> *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForString:(NSString *)arg1 options:(unsigned long long)arg2 searchCanvasDelegate:(id <TSKSearchCanvasDelegate>)arg3 onHit:(void (^)(id <TSKSearchReference>))arg4;
@end

