//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSDraggingSource-Protocol.h"
#import "NSFilePromiseProviderDelegate-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSView;
@protocol _TtP5Skype26DraggingControllerDelegate_;

@interface Skype.DraggingController : NSObject <NSDraggingSource, NSPasteboardItemDataProvider, NSFilePromiseProviderDelegate>
{
    // Error parsing type: , name: draggingDelegate
    // Error parsing type: , name: containingView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)prepareDraggingWithMouseDownEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak NSView *containingView; // @synthesize containingView;
@property(nonatomic) __weak id <_TtP5Skype26DraggingControllerDelegate_> draggingDelegate; // @synthesize draggingDelegate;

@end

