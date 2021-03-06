//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PAImaging/PAVersionResourceRequest.h>

#import "IPXVersionResourceProgressViewDelegate-Protocol.h"

@class IPXManualGlobalProgress, IPXVersionResourceProgressViewController, NSString, NSWindow;

@interface IPXVersionResourceRequest : PAVersionResourceRequest <IPXVersionResourceProgressViewDelegate>
{
    IPXVersionResourceProgressViewController *_modalProgressController;
    IPXManualGlobalProgress *_globalProgressController;
    long long _originalVersionCount;
    BOOL _didCancel;
    BOOL _didShowError;
    BOOL _showModalProgress;
    BOOL _showGlobalProgress;
    NSWindow *_baseWindowForProgress;
    long long _requestOperation;
    CDUnknownBlockType _originalProgressHandler;
    CDUnknownBlockType _originalCompletionHandler;
}

@property(copy) CDUnknownBlockType originalCompletionHandler; // @synthesize originalCompletionHandler=_originalCompletionHandler;
@property(copy) CDUnknownBlockType originalProgressHandler; // @synthesize originalProgressHandler=_originalProgressHandler;
@property long long requestOperation; // @synthesize requestOperation=_requestOperation;
@property(retain) NSWindow *baseWindowForProgress; // @synthesize baseWindowForProgress=_baseWindowForProgress;
@property BOOL showGlobalProgress; // @synthesize showGlobalProgress=_showGlobalProgress;
@property BOOL showModalProgress; // @synthesize showModalProgress=_showModalProgress;
- (void).cxx_destruct;
- (void)userCanceled;
- (void)dismissGlobalProgress;
- (void)dismissModalProgress;
- (void)displayGlobalProgressUI;
- (void)displayModalProgressUI;
- (void)stringKeyForProgress:(id *)arg1 error:(id *)arg2;
- (void)request:(id)arg1 handleProgress:(id)arg2;
- (id)submit:(CDUnknownBlockType)arg1;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

