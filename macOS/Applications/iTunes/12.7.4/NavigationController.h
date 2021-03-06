//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPopUpButton, NSSavePanel, NSView;

@interface NavigationController : NSObject
{
    NSView *accessory;
    NSSavePanel *_nsSavePanel;
    NSPopUpButton *_popup;
    short _currentFormat;
    struct JRNavPutFileParams *_putFileParams;
}

- (_Bool)putFileInternal:(struct JRNavPutFileParams *)arg1;
- (void)doFormatPopupChanged:(id)arg1;
- (void)addFileFormatsToSavePanel;
- (void)updateAllowedFileType;
- (id)init;

@end

