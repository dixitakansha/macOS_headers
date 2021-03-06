//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSData, NSDictionary, NSKeyedUnarchiver, NSMutableDictionary, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface NSPersistentUIWindowRestoration : NSObject <NSKeyedUnarchiverDelegate>
{
    unsigned int windowID;
    BOOL finishedRestoring;
    NSWindow *restoredWindow;
    NSMutableDictionary *persistentIDToRecord;
    NSKeyedUnarchiver *windowCoder;
    NSData *lastMinuteWindowData;
    NSDictionary *talagentWindowDictionary;
    BOOL talagentWindowTransferredOwnership;
    BOOL restoredWindowPinned;
}

+ (void)bulkDisposeTalagentWindowsIfUnused:(id)arg1 withFade:(BOOL)arg2;
@property(retain) NSData *lastMinuteWindowData; // @synthesize lastMinuteWindowData;
@property(readonly) NSWindow *restoredWindow; // @synthesize restoredWindow;
@property(copy) NSDictionary *talagentWindowDictionary; // @synthesize talagentWindowDictionary;
@property(readonly) unsigned int windowID; // @synthesize windowID;
- (void)dealloc;
- (void)unpinRestoredWindowFromTalagentWindow;
- (void)pinRestoredWindowToTalagentWindow;
- (void)disposeTalagentWindowIfUnused;
- (void)removeSurface;
- (BOOL)talagentWindowBecameOtherWindow;
- (BOOL)talagentWindowBecameRealWindow;
- (unsigned int)acquireTalagentWindow;
- (unsigned int)talagentWindow;
- (void)closeWindowCoder;
- (id)windowCoder;
- (BOOL)isFinishedRestoring;
- (BOOL)isGlobal;
- (void)finishRestoringWithWindow:(id)arg1;
- (id)recordForPersistentID:(id)arg1;
- (void)setRecord:(id)arg1 forPersistentID:(id)arg2;
- (id)initWithWindowID:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

