//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSULogContext-Protocol.h"

@class NSString, NSURL, TSKDocumentRoot;
@protocol TSKDocumentInfo, TSKDocumentRootDelegate;

@interface TSKLogContext : NSObject <TSULogContext>
{
    id <TSKDocumentInfo> _documentInfo;
    TSKDocumentRoot *_documentRoot;
    id <TSKDocumentRootDelegate> _document;
    NSURL *_url;
}

+ (id)logContextWithURL:(id)arg1;
+ (id)logContextWithDocumentInfo:(id)arg1 documentRoot:(id)arg2 document:(id)arg3;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) __weak id <TSKDocumentRootDelegate> document; // @synthesize document=_document;
@property(readonly, nonatomic) __weak TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(readonly, nonatomic) __weak id <TSKDocumentInfo> documentInfo; // @synthesize documentInfo=_documentInfo;
- (void).cxx_destruct;
- (id)p_documentRootDelegate;
@property(readonly) NSString *privateString;
@property(readonly) NSString *publicString;
- (id)initWithDocumentInfo:(id)arg1 documentRoot:(id)arg2 document:(id)arg3 url:(id)arg4 logContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

