//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CWRecItemDetail, NSButton, NSString, NSTextField;

@interface CWRecItemView : NSViewController
{
    NSTextField *_nameTF;
    NSTextField *_recommendationTF;
    NSButton *_infoButton;
    CWRecItemDetail *_detail;
    NSString *_issueName;
    NSString *_issueDesc;
    NSString *_issueRec;
}

@property(copy) NSString *issueRec; // @synthesize issueRec=_issueRec;
@property(copy) NSString *issueDesc; // @synthesize issueDesc=_issueDesc;
@property(copy) NSString *issueName; // @synthesize issueName=_issueName;
- (void)onInfoButton:(id)arg1;
- (void)viewWillLayout;
- (void)dealloc;
- (id)initWithDetail:(id)arg1;

@end

