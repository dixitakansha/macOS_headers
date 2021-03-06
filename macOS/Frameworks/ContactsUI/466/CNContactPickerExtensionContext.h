//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>
#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)pickerDidCancel;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

