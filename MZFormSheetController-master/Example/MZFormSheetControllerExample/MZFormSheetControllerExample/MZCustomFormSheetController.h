//
//  MZCustomForhSheetController.h
//  MZFormSheetControllerExample
//
//  Created by Michał Zaborowski on 09.08.2013.
//  Copyright (c) 2013 Michał Zaborowski. All rights reserved.
//

#import "MZFormSheetController.h"

@interface MZCustomFormSheetController : MZFormSheetController

- (void)customTransitionEntryWithCompletionBlock:(void(^)())completionBlock;
- (void)customTransitionOutWithCompletionBlock:(void(^)())completionBlock;


@end
