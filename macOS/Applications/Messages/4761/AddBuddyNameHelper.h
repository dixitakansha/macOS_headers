//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTextFieldDelegate-Protocol.h"
#import "ServicePopUpDelegate-Protocol.h"

@class IMAccount, IMHandle, NSArray, NSMutableSet, NSString, NSTextField, NSWindow;

@interface AddBuddyNameHelper : NSObject <NSTextFieldDelegate, ServicePopUpDelegate>
{
    NSWindow *_window;
    NSTextField *_nameField;
    NSArray *_sortedCurrentAccountHandles;
    NSMutableSet *_currentAccountHandles;
    NSMutableSet *_currentIChatBuddies;
    IMAccount *_currentAccount;
    NSString *_previousSubstring;
    IMHandle *_currentHandle;
    BOOL _isUserEdited;
}

@property(readonly) BOOL isUserEdited; // @synthesize isUserEdited=_isUserEdited;
- (void)servicePopUpSelectionDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)changedToAccount:(id)arg1;
- (id)currentAccountHandles;
- (id)currentHandle;
- (void)clearTextField;
- (void)initializeHandleList;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

