//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNPropertyPlaceholderCell : CNLabeledCell
{
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (BOOL)shouldIndentWhileEditing;
- (double)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)labelView;

@end

