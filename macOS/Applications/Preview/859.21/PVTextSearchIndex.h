//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PVMediaContainerBase;

@interface PVTextSearchIndex : NSObject
{
    struct __SKIndex *_skIndexRef;
    BOOL _indexing;
    BOOL _canceled;
    unsigned long long _indexingChangeCount;
    PVMediaContainerBase *_container;
    NSDate *_timeStamp;
    unsigned long long _searchBasis;
}

@property(getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property unsigned long long searchBasis; // @synthesize searchBasis=_searchBasis;
@property(retain) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain) PVMediaContainerBase *container; // @synthesize container=_container;
@property unsigned long long indexingChangeCount; // @synthesize indexingChangeCount=_indexingChangeCount;
@property(getter=isIndexing) BOOL indexing; // @synthesize indexing=_indexing;
@property(retain) struct __SKIndex *skIndexRef; // @synthesize skIndexRef=_skIndexRef;
- (BOOL)_indexQuickLookDocument:(id)arg1 parentSKDocument:(void *)arg2;
- (BOOL)_indexPDFDocumentByOutline:(id)arg1 withOutlineNodes:(id)arg2 parentSKDocument:(void *)arg3;
- (BOOL)_indexPDFDocumentByPage:(id)arg1 parentSKDocument:(void *)arg2;
- (void)startIndexingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSKIndex:(struct __SKIndex *)arg1 forContainer:(id)arg2 forSearchBasis:(unsigned long long)arg3;

@end

