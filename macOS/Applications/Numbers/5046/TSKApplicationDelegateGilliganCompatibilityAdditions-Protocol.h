//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSIndexSet, NSMutableArray, NSString, TSKCommand, TSKDocumentRoot;

@protocol TSKApplicationDelegateGilliganCompatibilityAdditions

@optional
- (TSKCommand *)moveDrawablesZOrderCommandForDocument:(TSKDocumentRoot *)arg1 drawableInfos:(NSArray *)arg2 indexes:(NSIndexSet *)arg3;
- (NSMutableArray *)drawableUUIDsSortedByZOrder:(TSKDocumentRoot *)arg1;
- (long long)zOrderOfIdPath:(NSString *)arg1 inDocument:(TSKDocumentRoot *)arg2;
@end

